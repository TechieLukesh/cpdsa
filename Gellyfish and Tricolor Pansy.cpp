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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < d && b <= c)
    {
        if (b <= a)        cout << "Gellyfish" << endl;
        
        else cout << "Flower" << endl;
        
    }
    else if (a >= d && b <= c)cout << "Gellyfish" << endl;
    
    else if (a < d && b >= c + 1)cout << "Flower" << endl;
    
    else
    {
        if (d <= c)
        
            cout << "Gellyfish" << endl;
        
        else
        
            cout << "Flower" << endl;
        
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