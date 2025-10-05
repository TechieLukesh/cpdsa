#include <iostream>
using namespace std;

class Heap
{
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
        while (index < size)
        {
                }
    }
};
int main()
{

    return 0;
}