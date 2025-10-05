#include <iostream>
#include <vector>
using namespace std;

void solve(int n, string count[])
{

    if (n == 0)
    {
        return;
    }
    int digits = n % 10;
    n = n / 10;

    solve(n, count);

    cout << count[digits] << " ";
}

int main()
{
    int n;
    cin >> n;

    string count[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    solve(n, count);
}