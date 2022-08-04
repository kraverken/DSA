#include <iostream>
using namespace std;
void sortArray(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
        return;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    return sortArray(arr, size - 1);
}
int main()
{
    int arr[6] = {1, 7, 6, 9, 10, 14};
    sortArray(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}