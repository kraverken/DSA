#include <iostream>
using namespace std;
int selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {48, 22, 16, 56, 8};
    selectionsort(arr, 5);
}
/*
array is divided into two subarrays sorted and unsorted and least element is put into its spot in each round
Space Complexity-> O(1)
Time Complexity-> O(n^2)
Best Case-> O(n^2)
Worst Case-> O(n^2)

Use Case->
small size of array or vector
Not a stable algorithm i.e doesnt maintain the relative order of elements
*/