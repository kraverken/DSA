#include <iostream>
using namespace std;
void recselectionSort(int arr[], int i, int s)
{
    if (i == s)
    {
        return;
    }
    int minIndex = i;
    for (int j = i + 1; j < s; j++)
    {
        if (arr[minIndex] > arr[j])
            minIndex = j;
    }
    swap(arr[minIndex], arr[i]);

    // rec call
    recselectionSort(arr, i + 1, s);
}
int main()
{
    int arr[] = {21, 34, 20, 31, 78, 43, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    recselectionSort(arr, 0, size);
    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}