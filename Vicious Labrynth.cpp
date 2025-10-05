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
    int n;
    long long k;
    cin >> n >> k;

    vector<int> teleport(n + 1);

   
    for (int i = 1; i < n; i++)
    {
        teleport[i] = i + 1;
    }
    teleport[n] = n - 1;

  
    vector<int> final_pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int pos = i;
        for (int j = 0; j < k; j++)
        {
            pos = teleport[pos]; 
        }
        final_pos[i] = pos;
    }

 
    for (int i = 1; i <= n; i++)
    {
        cout << final_pos[i] << " ";
    }
    cout << "\n";
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