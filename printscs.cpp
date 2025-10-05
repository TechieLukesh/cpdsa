class Solution
{
    // Corrected LCS function
    int lcs(string str1, string str2, int m, int n, vector<vector<int>> &t)
    { // Fix: Pass `t` by reference
        // Solving using bottom-up DP

        // Base case
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                { // Fix: Add base condition for initializing the first row and column
                    t[i][j] = 0;
                }
                else if (str1[i - 1] == str2[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        return t[m][n];
    }

public:
    string shortestCommonSupersequence(string str1, string str2)
    {
        int m = str1.size();
        int n = str2.size();

        // DP matrix
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));

        // Compute LCS
        lcs(str1, str2, m, n, t);

        int i = m;
        int j = n;

        string result = "";

        // Backtracking to construct the shortest common supersequence
        while (i > 0 && j > 0)
        { // Fix: Use `&&` instead of `||` for the main loop
            if (str1[i - 1] == str2[j - 1])
            {
                result.push_back(str1[i - 1]);
                i--;
                j--;
            }
            else if (t[i - 1][j] > t[i][j - 1])
            {
                result.push_back(str1[i - 1]);
                i--;
            }
            else
            {
                result.push_back(str2[j - 1]);
                j--;
            }
        }

        // Include remaining characters of `str1` and `str2`
        while (i > 0)
        {
            result.push_back(str1[i - 1]);
            i--;
        }

        while (j > 0)
        {
            result.push_back(str2[j - 1]); // Fix: Use `str2` instead of `str1`
            j--;
        }

        // Reverse the result string since it was constructed in reverse order
        reverse(result.begin(), result.end());

        return result;
    }
};
