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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        int maxZeros = 0;
        int noOfZeros = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int num : arr)
        {
            if (num == 0)
            {
                noOfZeros++;
                maxZeros = max(maxZeros, noOfZeros);
            }

            else
            {
                noOfZeros = 0;
            }
        }
        cout << maxZeros << endl;
    }
    return 0;
}