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

class Solution
{
    int solve(int n)
    {
        // base case
        if (n == 0)
            return 0;
        return (n & 1) + solve(n >> 1);
    }

public:
    int raisingBacteria(int x)
    {
        return solve(x);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    Solution sol;
    cout << sol.raisingBacteria(x) << "\n";
    return 0;
}