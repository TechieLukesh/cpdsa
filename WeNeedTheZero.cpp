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

const int mod = 1000000007;

int solve(vector<int> &arr, vector<int> &bitMask, int n)
{
    unordered_map<int, int> mp;
    int i;
    int ans;

    for (i = 0; i < 256; i++)
    {

        int a = arr[i] ^ i;
        bitMask.push_back(a);
    }

        sort(bitMask.begin(), bitMask.end());

        int sub = arr[0];

        for (int j = 1; j < bitMask.size(); j++)
        {
            mp[bitMask[j]]++;

            int count;
            for (auto i : mp)
            {
                count = i.second;
            }

            sub -= arr[j];

            if (sub == 0 || count % 2 == 0)
            {
                ans = i;
            }
        }
    
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        vector<int> arr(n);
        vector<int> bitMask(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int result = solve(arr, bitMask, n);
        cout << result << endl;
    }
    return 0;
}