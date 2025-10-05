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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi noOfDays(n);
    for (int i = 0; i < n; i++)

        cin >> noOfDays[i];

    priority_queue<ii, vector<ii>, greater<ii>> daysInst;
    for (int i = 0; i < n; i++)

        daysInst.push({noOfDays[i], i + 1});

    int sum = 0;
    vector<int> selected;
    while (!daysInst.empty() && sum + daysInst.top().first <= k)
    {
        sum += daysInst.top().first;
        selected.push_back(daysInst.top().second);
        daysInst.pop();
    }
    cout << selected.size() << "\n";
    for (int x : selected)
        cout << x << " ";
}

int main()
{
    solve();
    return 0;
}