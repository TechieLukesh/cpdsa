class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();

        // dp matrix
        vector<vector<int>> t(n + 1, vector<int>(amount + 1, 0));

        // initialization
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= amount; j++)
            {
                if (i == 0)
                    t[i][j] = INT_MAX - 1; // Error: INT_MAX could cause overflow in addition. Use INT_MAX - 1.
                if (j == 0)
                    t[i][j] = 0;
            }
        }
        int i = 1;
        for (int j = 1; j <= amount; j++)
        {
            if (j % coins[0] == 0)
                t[i][j] = j / coins[0];
            else
                t[i][j] = INT_MAX - 1; // Error: Ensure it matches the same value used in initialization above.
        }

        // fill up the dp table
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                if (coins[i - 1] <= j)
                    t[i][j] = min((t[i][j - coins[i - 1]] + 1), t[i - 1][j]);
                else
                    t[i][j] = t[i - 1][j];
            }
        }

        // Error: Need to check if a solution exists before returning t[n][amount].
        return t[n][amount] == INT_MAX - 1 ? -1 : t[n][amount];
    }
};
