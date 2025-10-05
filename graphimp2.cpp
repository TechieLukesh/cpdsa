#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    // 1-->directed map
    // 0-->undirected map

    void addEdges(int u, int v, bool direction)
    {

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto &i : adj)
        {
            cout << i.first << "->";
            for (auto &j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter the value of edges" << endl;
    cin >> m;

    Graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, 0);
    }

    g.print();

    return 0;
}