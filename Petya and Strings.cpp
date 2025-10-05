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
    string s1, s2;
    cin >> s1 >> s2;
    char a = ' ';
    char b = ' ';
    for (int i = 0; s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            a = s1[i];
            b = s2[i];
        }
    }

    int aVal = int(a);
    int bVal = int(b);

    if (aVal > bVal)
        cout << "-1\n";
    else if (aVal < bVal)
        cout << "1\n";
    else
        cout << "0\n";
}

int main()
{
    solve();
    return 0;
}