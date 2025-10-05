#include <bits/stdc++.h>
using namespace std;

const char dl[] = {'D', 'L', 'R', 'U'};
const int dr[] = {1, 0, 0, -1}, dc[] = {0, -1, 1, 0};

int n, m, k;
vector<vector<char>> g;
vector<vector<int>> dist;

void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});
    dist[sr][sc] = 0;

    while (!q.empty())
    {
        int r = q.front().first, c = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nr = r + dr[i], nc = c + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && g[nr][nc] == '.' && dist[nr][nc] == 1e9)
            {
                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    g.assign(n, vector<char>(m));
    dist.assign(n, vector<int>(m, 1e9));

    int sr, sc;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> g[r][c];
            if (g[r][c] == 'X')
                sr = r, sc = c, g[r][c] = '.';
        }
    }

    bfs(sr, sc);

    if (k % 2 == 1)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    string ans;
    int r = sr, c = sc;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int nr = r + dr[j], nc = c + dc[j];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && g[nr][nc] == '.' && dist[nr][nc] <= k - i - 1)
            {
                ans += dl[j];
                r = nr, c = nc;
                break;
            }
        }
    }

    cout << (ans.size() == k ? ans : "IMPOSSIBLE") << endl;
    return 0;
}
