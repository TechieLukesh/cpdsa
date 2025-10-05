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
        vector<int> arr(n);
        vector<int> ans;

        ans.push_back(arr[0]);

        for (int i = 0; i < n; i++)
        {
            ans.push_back(arr[i]);
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }

            else
            {
                ans.push_back(arr[i]);
            }
        }

        for (auto &it : ans)
        {
            cout << it << " ";
        }
    }

    return 0;
}
