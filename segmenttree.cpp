#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> tree;
    vector<int> arr = {1, 3, 5, 7, 9, 11};

    Solution()
    {
        int size = arr.size();
        tree.resize(4 * size);
    }

    void solve(int node, int start, int end)
    {
        // base case --> when leaf node comes

        if (start == end)
        {
            tree[node] = arr[start];
            return;
        }

        int mid = (start + end) / 2;

        // recursively calling left and right part of tree

        solve(2 * node, start, mid);
        solve(2 * node + 1, mid + 1, end);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    void printTree()
    {
        for (int i = 1; i < 15; i++)
        {
            cout << "tree[" << i << "] = " << tree[i] << endl;
        }
    }
};
int main()
{

    Solution g;
    int n = g.arr.size();
    g.solve(1, 0, n - 1);
    g.printTree();
    return 0;
}