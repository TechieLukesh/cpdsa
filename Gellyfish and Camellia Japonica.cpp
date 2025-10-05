#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int g = a[0];
    for (int i = 1; i < n; i++)
        g = gcd(g, a[i]);

    int cnt = count(a.begin(), a.end(), g);
    if (cnt > 0)
    {
        cout << (n - cnt) << '\n';
        return;
    }

    vector<int> u = a;
    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    int mx = *max_element(u.begin(), u.end());
    vector<int> d(mx + 1, -1);

    queue<int> q;
    for (int x : u)
    {
        d[x] = 0;
        q.push(x);
    }

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (v == g)
            break;
        for (int x : u)
        {
            int y = gcd(v, x);
            if (d[y] == -1)
            {
                d[y] = d[v] + 1;
                q.push(y);
            }
        }
    }

    int steps = d[g];
    cout << steps + (n - 1) << '\n';
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