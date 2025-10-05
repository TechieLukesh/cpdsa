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
    int size;
    cin >> size;

    vector<int> sequence(size + 1);
    for (int index = 1; index <= size; ++index)
        cin >> sequence[index];

    for (int position = 2; position < size; ++position)
    {
        if (sequence[position] > sequence[position - 1] && sequence[position] > sequence[position + 1])
        {
            cout << "YES" << "\n";
            cout << position - 1 << " " << position << " " << position + 1 << "\n";
            return;
        }
    }

    cout << "NO" << "\n";
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