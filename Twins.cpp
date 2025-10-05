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
    int n;
    cin >> n;

    vi coins(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    int target = sum / 2;

    sort(coins.begin(), coins.end());

    int tempSum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        tempSum += coins[i];
        count++;
        if (tempSum > target)
            break;
    }
    cout << count << "\n";
}

int main()
{
    solve();
    return 0;
}