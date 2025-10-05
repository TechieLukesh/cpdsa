#include <vector>
#include <string>
using namespace std;

class Solution
{
    // LCS function to find the longest common subsequence
    int lcs(string s, string s2, int n)
    {
        // Solving using bottom-up DP

        // DP matrix
        vector<vector<int>> t(n + 1, vector<int>(n + 1, 0));

        // Base case
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            { // Error: Should use `j <= n` instead of `i <= n`
                if (i == 0 || j == 0)
                {
                    t[i][j] = 0;
                }
            }
        }

        // Fill up the DP table
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s2[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }

        return t[n][n];
    }

public:
    int longestPalindromeSubseq(string s)
    {
        // Reverse the string to form s2
        string s2 = "";
        for (int i = s.size() - 1; i >= 0; i--)
        { // Error: Use `i = s.size() - 1` instead of `i = s.size()`
            s2.push_back(s[i]);
        }

        int n = s.size();
        int result = lcs(s, s2, n);
        return result;
    }
};
