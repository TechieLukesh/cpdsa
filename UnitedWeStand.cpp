#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> b;
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int index = 0;
        while (index < n && arr[index] == arr[0])
        {
            b.push_back(arr[index]);
            index++;
        }

        while (index < n)
        {
            c.push_back(arr[index]);
            index++;
        }

        if (c.size() == 0)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << endl;

            for (int y : c)
            {
                cout << y << " ";
            }

            cout << endl;
        }
    }
    return 0;
}