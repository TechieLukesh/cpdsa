#include <iostream>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int minDelForMinCost(string s)
{
    int n = s.size();
    int minDel = n - 1;
    double minCost = numeric_limits<double>::max();

    for (int mask = 1; mask < (1 << n); ++mask)
    {
        string sub = "";
        int digSum = 0;

        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                sub += s[i];
                digSum += (s[i] - '0');
            }
        }

        long long num = stoll(sub);

        if (digSum == 0)
            continue;

        double cost = (double)num / digSum;

        if (cost < minCost)
        {
            minCost = cost;
            minDel = n - sub.size();
        }
        else if (abs(cost - minCost) < 1e-9)
        {

            minDel = min(minDel, n - (int)sub.size());
        }
    }

    return minDel;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        cout << minDelForMinCost(n) << endl;
    }
    return 0;
}
