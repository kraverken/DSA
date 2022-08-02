// First and last occurance of element in sorted array

#include <iostream>
using namespace std;
int firstOccu(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (end + start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int lastOccu(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (end + start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arrays[9] = {1, 2, 3, 4, 4, 4, 4, 4, 4};
    cout << "The first occurance of 4 is " << firstOccu(arrays, 9, 4) << endl;
    cout << "The first occurance of 4 is " << lastOccu(arrays, 9, 4) << endl;
}