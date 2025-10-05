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
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // storing the position of nuts

    vector<int> nut_position;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            nut_position.push_back(i);
        }
    }

    // edge cases

    int total_nuts = nut_position.size();

    if (total_nuts == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (total_nuts == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    // calculate the gaps

    long long ways = 1;
    for (int i = 1; i < total_nuts; i++)
    {
        int gaps = nut_position[i] - nut_position[i - 1];
        ways *= gaps;
    }

    cout << ways << endl;

    return 0;
}