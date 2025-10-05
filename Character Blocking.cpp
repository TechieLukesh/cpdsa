#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int t, q;
        cin >> t >> q;

        vector<int> block_time(n, 0);  // when the position gets unblocked
        int current_time = 0;

        set<int> mismatch;  // stores positions where s1[i] != s2[i] and not blocked

        // Initialize mismatch set
        for (int i = 0; i < n; ++i) {
            if (s1[i] != s2[i]) mismatch.insert(i);
        }

        queue<pair<int, int>> unblock_events; // {unblock_time, position}

        while (q--) {
            ++current_time;

            // Process all unblock events for current time
            while (!unblock_events.empty() && unblock_events.front().first == current_time) {
                int pos = unblock_events.front().second;
                unblock_events.pop();
                if (s1[pos] != s2[pos]) mismatch.insert(pos); // position becomes active again
            }

            int type;
            cin >> type;

            if (type == 1) {
                int pos;
                cin >> pos;
                --pos;

                // block for t seconds from now
                block_time[pos] = current_time + t;
                unblock_events.push({current_time + t, pos});
                mismatch.erase(pos); // while blocked, ignore from mismatch
            } 
            else if (type == 2) {
                int str1, pos1, str2, pos2;
                cin >> str1 >> pos1 >> str2 >> pos2;
                --pos1; --pos2;

                // Check if both positions are not blocked
                if (block_time[pos1] > current_time || block_time[pos2] > current_time) {
                    continue; // guaranteed not blocked, so we don’t actually need this check due to input guarantees
                }

                // Get references to the correct string
                char &a = (str1 == 1 ? s1[pos1] : s2[pos1]);
                char &b = (str2 == 1 ? s1[pos2] : s2[pos2]);

                // Before swap, check if positions were mismatches
                if (pos1 == pos2) {
                    // same position in same string (silly case)
                    continue;
                }

                // erase both from mismatch if applicable
                if (s1[pos1] != s2[pos1] && block_time[pos1] <= current_time) mismatch.erase(pos1);
                if (s1[pos2] != s2[pos2] && block_time[pos2] <= current_time) mismatch.erase(pos2);

                swap(a, b);

                // after swap, recheck and update mismatch
                if (s1[pos1] != s2[pos1] && block_time[pos1] <= current_time) mismatch.insert(pos1);
                if (s1[pos2] != s2[pos2] && block_time[pos2] <= current_time) mismatch.insert(pos2);
            } 
            else if (type == 3) {
                if (mismatch.empty()) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }

    return 0;
}
