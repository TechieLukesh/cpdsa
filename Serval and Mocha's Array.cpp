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

bool isBeautiful(vector<int> &a)
{
    int n = a.size();
    int gcd_value = a[0];
    int flag = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(a[i], a[j]) <= 2)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        return true;
    }

    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isBeautiful(a))
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