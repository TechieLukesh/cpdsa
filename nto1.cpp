#include <iostream>
using namespace std;

void solve(int n)
{
    if (n == 1)
        return;

    cout << n << endl;
    solve(n - 1);
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    cout << solve(n);
    return 0;
}