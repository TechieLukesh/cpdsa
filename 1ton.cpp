// #include <iostream>
// using namespace std;

// void solve(int i, int n)
// {
//     // base case

//     if (i > n)
//         return;

//     cout << i << " ";

//     solve(i + 1, n);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n." << endl;
//     cin >> n;
//     solve(1, n);
//     return 0;
// }

// hyposthesis induction method
#include <iostream>
using namespace std;

void solve(int n)
{

    // think of the smallest valid input
    // here, n==0 is the smallest valid input which means it will stop when n==0
    if (n == 0)
        return;

    // inductive step
    // print remaining numbers
    solve(n - 1);

    // print the n

    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    solve(n);
    return 0;
}
