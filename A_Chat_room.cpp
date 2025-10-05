#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef set<int> si;
typedef set<ll> sl;
typedef multiset<int> msi;
typedef multiset<ll> msl;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

const int mod = 1000000007;

string target = "hello";

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    string target = "hello";

    bool solve(const string &s, int i, int j)
    {
        if (i == target.size())
            return true;
        if (j == s.size())
            return false;

        if (s[j] == target[i])
            return solve(s, i + 1, j + 1);
        else
            return solve(s, i, j + 1);
    }

public:
    void chatRoom(string &s)
    {
        if (solve(s, 0, 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    Solution sol;
    sol.chatRoom(s);
    return 0;
}
