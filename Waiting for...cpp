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
int waitPeople = 0;

void solve()
{
    char c;
    int x;
    cin >> c >> x;

    if (c == 'P')
        waitPeople += x;
    else if (c == 'B')
    {
        if (x > waitPeople)
        {

            cout << "Yes\n";
            waitPeople = 0;
        }

        else
        {
            cout << "No\n";

            waitPeople -= x;
        }
    }
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