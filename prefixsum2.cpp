#include <iostream>
#include <vector>

using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n][n];

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         long long sum = 0;

//         for (int i = a; i <= c; i++)
//         {

//             for (int j = b; j <= d; j++)
//             {
//                 sum += arr[i][j];
//             }
//         }

//         cout << sum << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;

    int arr[n][n];
    int pf[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];

            // prefix sum

            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
    }
}