#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, r;
//         cin >> l >> r;
//         long long sum = 0;

//         for (int i = l; i <= r; i++)
//         {
//             sum += a[i];
//         }

//         cout << sum << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int pf[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i - 1] + a[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;

        cout << pf[r] - pf[l - 1] << endl;
    }
}