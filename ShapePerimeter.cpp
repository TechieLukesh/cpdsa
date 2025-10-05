#include <bits/stdc++.h>
using namespace std;

// Function to calculate the perimeter efficiently
void solve() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Number of operations and size of the stamp
        vector<pair<int, int>> moves(n);
        for (int i = 0; i < n; i++) {
            cin >> moves[i].first >> moves[i].second;
        }

        // Map to store the number of perimeter contributions for each colored cell
        unordered_set<string> coloredCells;
        int perimeter = 0;
        int x = 0, y = 0; // Starting position of the stamp

        // Directions for neighbors
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        // Process each move
        for (auto move : moves) {
            x += move.first;
            y += move.second;

            // Stamp the m x m square
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    int cellX = x + i, cellY = y + j;
                    string cellKey = to_string(cellX) + "," + to_string(cellY);

                    // If the cell is being colored for the first time
                    if (coloredCells.find(cellKey) == coloredCells.end()) {
                        // Initially, add 4 to the perimeter (all edges are exposed)
                        perimeter += 4;

                        // Check all 4 neighbors
                        for (auto dir : directions) {
                            int nx = cellX + dir.first;
                            int ny = cellY + dir.second;
                            string neighborKey = to_string(nx) + "," + to_string(ny);

                            // If the neighbor is already colored, reduce the perimeter by 1
                            if (coloredCells.find(neighborKey) != coloredCells.end()) {
                                perimeter--; // Shared edge
                            }
                        }

                        // Mark the cell as colored
                        coloredCells.insert(cellKey);
                    }
                }
            }
        }

        cout << perimeter << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
