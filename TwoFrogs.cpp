#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int x = abs(a - b);

        if ((x == 1 || n <= 2) || x == 0)
        {
            cout << "No" << endl;
        }

        else if (n < x + 1)
        {
            cout << "No" << endl;
        }

        else if (n >= x + 1)
        {
            if (x & 1 == 1)
            {
                cout << "No" << endl;
            }

            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}