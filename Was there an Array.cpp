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

bool isPossible(int n, vector<int> &b)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (b[i - 1] == 1 && b[i] == 0 && b[i + 1] == 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> b(n - 2);

        for (int i = 0; i < n - 2; ++i)
        {
            cin >> b[i];
        }

        if (isPossible(n, b) == true)
        {
            cout << "Yes\n";
        }

        else
        {
            cout << "No\n";
        }
    }
    return 0;
}