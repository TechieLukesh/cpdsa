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
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxi = max(arr[i], maxi);
            mini = min(arr[i], mini);
        }

        int temp = maxi + mini;

        for (int i = 0; i < n; i++)
        {
            int sub = temp - arr[i];
            ans.push_back(sub);
        }

        for (int res : ans)
        {
            if (res != 0)
            {
                cout << res << " ";
            }
        }
        cout << endl;
    }
    return 0;
}