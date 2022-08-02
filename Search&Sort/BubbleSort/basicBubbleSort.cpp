#include <iostream>
using namespace std;
int bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // loop for number of rounds
    {
        bool swapped = false;           // For each round we set swapped to false
        for (int j = 0; j < n - i; j++) // After every round the largest element will be set to its place i.e (n-1 index set after 1 round) (n-2 index set after 2 round) and so on so there is no need to go to n -1 loops as it will increase the complexity
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break; // If before the next round we see that no swap has happened we just skip the iterations to make it more optimized
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1, 7, 6, 9, 10, 14};
    bubblesort(arr, 6);
}
/*
Time Complexity-> O(n^2)
Space Complexity-> O(1)
Best Case-> O(n)
Worst Case-> O(n^2)

Use Case->
In i^th round the i^th largest element is put into its right place
*/