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

using namespace std;

bool isValid(const vector<int> &p)
{
    int n = p.size();
    for (int i = 2; i <= n; ++i)
    {
        int max_val = max(p[i - 2], p[i - 1]);
        if (max_val % i != i - 1)
        {
            return false;
        }
    }
    return true;
}

vector<int> solve(int n)
{
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        p[i] = i + 1;
    }

    do
    {
        if (isValid(p))
        {
            return p;
        }
    } while (next_permutation(p.begin(), p.end()));

    return {-1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> result = solve(n);
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}