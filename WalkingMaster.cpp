#include <iostream>
using namespace std;

void solve(int a, int b, int c, int d)
{
    int x = d - b;
    int m = a + x;
    int n = b + x;
    if (x < 0)
    {
        cout << -1 << endl;
    }

    else if (a + (d - b) >= c)
    {
        int s = a + x;

        int r = s - c;

        int result = r + x;

        cout << result << endl;
    }

    else if (m < c)
    {

        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        solve(a, b, c, d);
    }
    return 0;
}