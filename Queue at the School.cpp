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
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char temp;
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }
    }

    cout << s << "\n";
}

int main()
{
    solve();
    return 0;
}