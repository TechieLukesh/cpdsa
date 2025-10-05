#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        bool c = true;

        for (int i = 0; i < n; i++)
        {
            if (i - 1 >= 0 && vec[i - 1] >= vec[i])
            {
                if (2 * vec[i] > vec[i - 1])
                {
                    c = false;
                    break;
                }
            }
            else if (i - 1 >= 0 && vec[i - 1] < vec[i])
            {
                if (2 * vec[i - 1] > vec[i])
                {
                    c = false;
                    break;
                }
            }

            if (i + 1 < n && vec[i + 1] >= vec[i])
            {
                if (2 * vec[i] > vec[i + 1])
                {
                    c = false;
                    break;
                }
            }
            else if (i + 1 < n && vec[i + 1] < vec[i])
            {
                if (2 * vec[i + 1] > vec[i])
                {
                    c = false;
                    break;
                }
            }
        }

        if (!c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
