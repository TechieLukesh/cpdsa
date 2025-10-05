#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    // DP table: dp[len][last_char] = number of sequences
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // forbidden[i][j] = true if 'i' cannot be followed by 'j'
    vector<vector<bool>> forbidden(m + 1, vector<bool>(m + 1, false));

    // Read forbidden pairs
    for (int i = 0; i < k; ++i)
    {
        char a, b;
        cin >> a >> b;
        int x = (a >= 'a' && a <= 'z') ? (a - 'a' + 1) : (a - 'A' + 27);
        int y = (b >= 'a' && b <= 'z') ? (b - 'a' + 1) : (b - 'A' + 27);
        forbidden[x][y] = true;
    }

    // Base case: sequences of length 1
    for (int last = 1; last <= m; ++last)
    {
        dp[1][last] = 1;
    }

    // Fill DP table
    for (int len = 2; len <= n; ++len)
    {
        for (int last = 1; last <= m; ++last)
        {
            for (int next = 1; next <= m; ++next)
            {
                if (!forbidden[last][next])
                { // Check if transition is allowed
                    dp[len][next] = (dp[len][next] + dp[len - 1][last]) % MOD;
                }
            }
        }
    }

    // Sum all possible sequences of length n
    int ans = 0;
    for (int last = 1; last <= m; ++last)
    {
        ans = (ans + dp[n][last]) % MOD;
    }

    cout << ans << endl;
    return 0;
}