#include <iostream>
using namespace std;
bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool rest = isSorted(arr + 1, size - 1);
        return rest;
    }
}
int main()
{
    int arr[5] = {4, 6, 8, 9, 1};
    bool ans = isSorted(arr, 5);
    if (ans)
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}