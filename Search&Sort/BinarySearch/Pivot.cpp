#include <iostream>
using namespace std;
int getPivotElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return arr[s];
}
int main()
{
    int arr[9] = {8, 10, 14, 18, 2, 3, 5, 6, 7};
    // cout << "I am here";
    cout << getPivotElement(arr, 9);
    // cout << "I am now here";
}