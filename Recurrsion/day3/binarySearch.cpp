#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int t)
{
    // base case
    if (start > end)
    {
        return false;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == t)
    {
        return true;
    }
    else if (arr[mid] < t)
    {
        return binarySearch(arr, mid + 1, end, t);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, t);
    }
}
int main()
{
    int target;
    int arr[7] = {3, 7, 10, 13, 16, 19, 22};
    cout << "Enter target value ";
    cin >> target;
    bool ans = binarySearch(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1, target);
    if (ans)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}