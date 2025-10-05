#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i].first >> vec[i].second;
        }

        string ans1 = "";
        set<int> st;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (vec[i].first == vec[i].second)
            {
                st.insert(vec[i].first);
                mp[vec[i].first]++;
            }
        }

        vector<int> ans(st.begin(), st.end());

        for (int i = 0; i < n; i++)
        {
            int l = vec[i].first, r = vec[i].second;
            if (l == r)
            {
                if (mp[l] > 1)
                {
                    ans1 += '0';
                }
                else
                {
                    ans1 += '1';
                }
                continue;
            }

            auto lower = lower_bound(ans.begin(), ans.end(), l);
            auto upper = upper_bound(ans.begin(), ans.end(), r);

            int length = upper - lower;
            if (length == (r - l + 1))
            {
                ans1 += '1';
            }
            else
            {
                ans1 += '0';
            }
        }

        cout << ans1 << "\n";
    }
    return 0;
}
