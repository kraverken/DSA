#include <iostream>
using namespace std;
int selectionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    selectionSort(arr, 7);
}

/*
Use Case->
Adaptable algorithm ith element is sorted in ith round
Stable algorithm
Works good on small size array/Partially sorted array
Space Complexity-> O(1)
Time Complexity-> O(n^2)
Best Case-> O(n)
Worst Case-> O(n^2)
*/