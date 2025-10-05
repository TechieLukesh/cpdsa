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

const int mod = 998244353;

void solve(vector<int> &p, int n, int k)
{
    // sort the permutation till kth largest elements

    vector<pair<int, int>> sortedP;
    for (int i = 0; i < n; i++)
    {
        sortedP.push_back({p[i], i});
    }

    sort(sortedP.rbegin(), sortedP.rend());

    // now sorte the positions

    vector<int> position;
    ll maxValue = 0;

    for (int i = 0; i < k; i++)
    {
        maxValue += sortedP[i].first;
        position.push_back(sortedP[i].second);
    }

    // sort the position array and find gaps between them

    sort(position.begin(), position.end());
    ll ways = 1;

    for (int i = 1; i < k; i++)
    {
        int gaps = position[i] - position[i - 1];
        ways = (ways * gaps) % mod;
    }

    cout << maxValue << " " << ways << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    solve(p, n, k);

    return 0;
}