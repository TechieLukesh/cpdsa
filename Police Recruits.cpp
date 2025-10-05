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

    int sum = 0;
    int ut = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            if (sum > 0)

                sum--;
            else
                ut++;
        }
        else
            sum += x;
    }

    cout << ut << "\n";
}

int main()
{
    solve();
    return 0;
}