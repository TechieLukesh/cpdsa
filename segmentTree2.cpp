#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> arr = {12, 4, 5, 13, 20, 10, 11, 8};
    vector<int> tree;

    Solution()
    {
        int n = arr.size();
        tree.resize(4 * n); // Allocate sufficient space for the segment tree
    }

    void buildTree(int node, int start, int end)
    {
        if (start == end)
        {
            tree[node] = arr[start];
            return;
        }

        int mid = (start + end) / 2;
        buildTree(2 * node, start, mid);
        buildTree(2 * node + 1, mid + 1, end);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    void printTree()
    {
        for (size_t i = 0; i < tree.size(); ++i)
        {
            cout << "tree[" << i << "] = " << tree[i] << endl;
        }
    }
};

int main()
{
    Solution g;
    int n = g.arr.size();
    g.buildTree(1, 0, n - 1);
    g.printTree();

    return 0;
}
