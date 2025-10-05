#include <bits/stdc++.h>
using namespace std;

// 42=2

void primeFact(int n)
{

    for (int i = 2; i <= n; i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << "^" << cnt << "*";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    primeFact(n);
    return 0;
}