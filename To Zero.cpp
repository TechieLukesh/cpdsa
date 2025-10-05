#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    int maxOdd = k;      // max odd is always k (since k is odd)
    int maxEven = k - 1; // max even is k-1 (guaranteed even if k is odd ≥ 3)

    while (n > 0)
    {
        if (n % 2 == 0) // even
        {
            int sub = min(n, maxEven);
            n -= sub;
            count++;
        }
        else // odd
        {
            int sub = min(n, maxOdd);
            n -= sub;
            count++;
        }
    }

    cout << count << "\n";
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
