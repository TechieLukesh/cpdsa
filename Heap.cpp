#include <iostream>
#include <queue>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete from the heap." << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[rightIndex], arr[i]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
};

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[i] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[i] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        Heapify(arr, n, i);
    }
}

void HeapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        Heapify(arr, size, 1);
    }
}
int main()
{
    Heap h;
    h.insert(50);
    h.insert(54);
    h.insert(45);
    h.insert(30);
    h.insert(67);
    h.insert(5);
    h.insert(100);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 50, 60, 45, 54, 65};

    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        Heapify(arr, n, i);
    }
    cout << "Print the output" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    HeapSort(arr, n);

    cout << "Print the output" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    priority_queue<int> pq;

    cout << "Priority queue" << endl;

    pq.push(6);
    pq.push(8);
    pq.push(81);
    pq.push(10);
    pq.push(9);
    pq.push(20);

    cout << "Top element" << pq.top() << endl;
    pq.pop();

    cout << "Top element" << pq.top() << endl;

    cout << "PQ size" << pq.size() << endl;

    if (pq.empty())
    {
        cout << "PQ is empty" << endl;
    }

    else
    {
        cout << "PQ is not empty" << endl;
    }

    // minheap

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(6);
    minHeap.push(8);
    minHeap.push(81);
    minHeap.push(10);
    minHeap.push(9);
    minHeap.push(20);

    cout << "Top element" << minHeap.top() << endl;
    minHeap.pop();

    cout << "Top element" << minHeap.top() << endl;

    cout << "PQ size" << minHeap.size() << endl;

    if (minHeap.empty())
    {
        cout << "PQ is empty" << endl;
    }

    else
    {
        cout << "PQ is not empty" << endl;
    }

    return 0;
}