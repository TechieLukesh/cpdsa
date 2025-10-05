#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // to store the min. no of operation
    int count = 0;

    int mini = INT_MAX;

    vector<int> arr(N);

    // to know if there is zero in the array
    bool containsZero = false;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            containsZero = true;
        }

        // if a single zero is present, no operation is needed
        if (containsZero)
        {
            cout << "0" << endl;
            return 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int op = 0;

        if (arr[i] < 0)
        {
            op = -arr[i];
        }
        else
        {
            op = arr[i];
        }

        mini = min(mini, op);
        count += mini;
    }

    cout << mini << endl;

    return 0;
}
