#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < x; i++)
        cout << i << " ";
    for (int i = n - 1; i >= x; i--)
        cout << i << " ";
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
