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
    int h, w;  // floor ka dimension
    cin >> h >> w;

    int a, b; // sheet ka dimension
    int x1, y1, x2, y2;
    // sheet a ka coord  sheet b ka coord
    cin >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;

    // check karo horizontal overlapping hai ki ni 
    if (max(x1, x2) <= min(x1, x2) + a - 1)
    {
        // yadi hai to check karo height gap sheet ke height ke multiple me hai ya ni
        if (abs(y1 - y2) % b != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // check karo vertical overlapping hai ki ni 
    if (max(y1, y2) <= min(y1, y2) + b - 1)
    {  
        //yadi hai to check karo width gap sheet ke width ke multiple me hai ya ni
        if (abs(x1 - x2) % a != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // check karo yadi dono hi multiple me ni hai to no return karo 
    if (abs(x1 - x2) % a != 0 && abs(y1 - y2) % b != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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