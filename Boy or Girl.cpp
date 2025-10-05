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

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (int i = 0; i < s.size(); i++)

        mp[s[i]]++;

        if (mp.size() % 2 != 0)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}

int main()
{
    solve();
    return 0;
}