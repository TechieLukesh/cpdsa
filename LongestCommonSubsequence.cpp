class Solution
{
    int longestCommonSubsequenceHelper(string &text1, string &text2, int m, int n, vector<vector<int>> &dp)
    {
        // base case
        if (m == 0 || n == 0)
            return 0;

        // check if the result is already computed
        if (dp[m][n] != -1)
            return dp[m][n];

        // recursive code with memoization
        if (text1[m - 1] == text2[n - 1])
        {
            dp[m][n] = 1 + longestCommonSubsequenceHelper(text1, text2, m - 1, n - 1, dp);
        }
        else
        {
            dp[m][n] = max(
                longestCommonSubsequenceHelper(text1, text2, m - 1, n, dp),
                longestCommonSubsequenceHelper(text1, text2, m, n - 1, dp));
        }

        return dp[m][n];
    }

public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.size();
        int n = text2.size();

        // initialize dp table with -1
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        // call helper function with memoization
        return longestCommonSubsequenceHelper(text1, text2, m, n, dp);
    }
};
