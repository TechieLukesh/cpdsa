#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

bool checkIfDistinct(int x)
{
    string year = to_string(x);

    unordered_map<char, int> mp;
    for (int i = 0; i < year.size(); i++)

        mp[year[i]]++;

    for (auto &it : mp)
    {
        if (it.second >= 2)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = n + 1; i <= 10000; i++)
    {
        if (checkIfDistinct(i))
        {
            ans = i;
            break;
        }
    }

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}