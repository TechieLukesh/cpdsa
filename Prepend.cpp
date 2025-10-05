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

        string s;
        cin >> s;

        int i = 0, j = n - 1;

        int count = 0;

        while (i < j && s[i] != s[j])
        {
            i++;
            j--;
        }

        cout << j - i + 1 << endl;
    }
    return 0;
}