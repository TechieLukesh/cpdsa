/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/
Author - Lukesh Poddar
Username - lukeshpoddar
Push harder than yesterday if you want a different tomorrow.
/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

bool isLucky(int cnt)
{
    string intToStr = to_string(cnt);
    for (char ch : intToStr)
    {
        if (ch != '7' && ch != '4')
            return false;
    }

    return true;
}

void solve()
{
    string n;
    cin >> n;

    unordered_map<char, int> mp;

    for (char ch : n)
    {
        mp[ch]++;
    }

    int luckydigCnt = 0;

    luckydigCnt += mp['4'];
    luckydigCnt += mp['7'];

    if (isLucky(luckydigCnt))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    solve();
    return 0;
}