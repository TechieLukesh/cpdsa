#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Solution
{
public:
    unordered_map<int, list<int>> aList;
    vector<int> idegree;
    queue<int> q;
    vector<int> topoSort;

    // for finding the indegree
    void indegree(int noNodes)
    {
        idegree.resize(noNodes, 0);
        for (auto &u : aList)
        {
            for (auto &v : u.second)
            {
                idegree[v]++;
            }
        }

        for (int i = 0; i < noNodes; i++)
        {
            if (idegree[i] == 0)
            {
                q.push(i);
            }
        }
    }

    void bfs()
    {
        while (!q.empty())
        {
            int front = q.front();
            q.pop();

            topoSort.push_back(front);

            for (auto &neighbour : aList[front])
            {
                idegree[neighbour]--;
                if (idegree[neighbour] == 0)
                    q.push(neighbour);
            }
        }

        for (int i : topoSort)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    // for findnig adjacency list

    void adjList(int u, int v)
    {

        aList[u].push_back(v);
    }

    void printAdjList()
    {
        for (auto &i : aList)
        {
            cout << i.first << "->";
            for (auto &j : i.second)
            {
                cout << j << ",";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Solution g;
    g.adjList(0, 3);
    g.adjList(0, 2);
    g.adjList(3, 1);
    g.adjList(1, 4);
    g.adjList(2, 3);
    g.adjList(2, 1);
    g.adjList(5, 1);
    g.adjList(5, 4);

    g.printAdjList();

    int noNodes = 6;
    g.indegree(6);
    g.bfs();

    return 0;
}