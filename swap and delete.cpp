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

#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string binaryString;
    cin >> binaryString;

    int length = binaryString.length();
    int countOnes = count(binaryString.begin(), binaryString.end(), '1');
    int countZeros = length - countOnes;

    int index = 0;
    for (; index < length; index++)
    {
        if (binaryString[index] == '0')
        {
            if (countOnes > 0)
                countOnes--;
            else
                break;
        }
        else
        {
            if (countZeros > 0)
                countZeros--;
            else
                break;
        }
    }

    cout << length - index << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}