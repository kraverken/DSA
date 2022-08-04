#include <iostream>
using namespace std;
void insertionSortRecursive(int arr[], int n)
{
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert last element at its correct position
    // in sorted array.
    int last = arr[n - 1];
    int j = n - 2;

    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
int main()
{
    int Arr[] = {21, 34, 20, 31, 78, 43, 66};
    int length = sizeof(Arr) / sizeof(Arr[0]);

    insertionSortRecursive(Arr, length);

    cout << "Sorted array : ";
    for (int i = 0; i < length; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}