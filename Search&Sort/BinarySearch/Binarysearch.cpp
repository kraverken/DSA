#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    int a = binarySearch(arr, 8, 5);
    cout << a + 1 << endl;
}