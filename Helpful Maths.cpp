#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

void solve()
{
    string s;
    cin >> s;

    vector<char> onlyNo;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
            onlyNo.push_back(s[i]);
    }

    sort(onlyNo.begin(), onlyNo.end());

    string res = "";

    for (int i = 0; i < onlyNo.size(); i++)
    {
        res.push_back(onlyNo[i]);
        if (i != onlyNo.size() - 1)
            res.push_back('+');
    }

    cout << res << "\n";
}

int main()
{
    solve();
    return 0;
}