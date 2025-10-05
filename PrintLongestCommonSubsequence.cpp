#include <vector>
#include <string>
#include <algorithm> // for reverse
using namespace std;

string findLCS(int n, int m, string &s1, string &s2)
{
    // Preparing dp table using bottom-up
    vector<vector<int>> t(n + 1, vector<int>(m + 1, 0));

    // Base case
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        { // Error: Use `j <= m` instead of `i <= m`
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }

    // Fill up the dp table
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }

    // Using backtracking to find the LCS
    int i = n;
    int j = m;
    string result = "";

    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {                                // Error: Compare `s1[i-1]` and `s2[j-1]` instead of `s1[i] == s2[j]`
            result.push_back(s1[i - 1]); // Error: Push `s1[i-1]` instead of `s1[i]`
            i--;
            j--;
        }
        else if (t[i - 1][j] > t[i][j - 1])
        { // Error: Compare `t[i-1][j]` and `t[i][j-1]` instead of invalid indices
            i--;
        }
        else
        {
            j--;
        }
    }

    reverse(result.begin(), result.end()); // Error: `reverse` modifies the string in place; no return value
    return result;
}
