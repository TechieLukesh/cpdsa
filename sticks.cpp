#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <stack>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int countL = count(s.begin(), s.end(), '<');
        int countR = count(s.begin(), s.end(), '>');

        vector<int> small;
        vector<int> large;
        set<int> all;

        for (int i = 1; i <= countL; i++)
            small.push_back(i);
        for (int i = n - countR + 1; i <= n; i++)
            large.push_back(i);
        for (int i = 1; i <= n; i++)
            all.insert(i);

        for (int x : small)
            all.erase(x);
        for (int x : large)
            all.erase(x);

        int mid = *all.begin();

        vector<char> need;
        for (char c : s)
        {
            if (c == '<')
                need.push_back('S');
            else
                need.push_back('L');
        }

        vector<int> ans(n);
        ans[0] = mid;
        int pos = 1;

        int i = 0;
        while (i < need.size())
        {
            char type = need[i];
            int j = i + 1;
            while (j < need.size() && need[j] == type)
                j++;

            int len = j - i;
            vector<int> temp;

            if (type == 'S')
            {

                for (int k = small.size() - len; k < small.size(); k++)
                {
                    temp.push_back(small[k]);
                }
                small.resize(small.size() - len);
                sort(temp.rbegin(), temp.rend());
            }
            else
            {

                for (int k = 0; k < len; k++)
                {
                    temp.push_back(large[k]);
                }
                large.erase(large.begin(), large.begin() + len);
                sort(temp.begin(), temp.end());
            }

            for (int x : temp)
            {
                ans[pos++] = x;
            }

            i = j;
        }

        for (int x : ans)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
