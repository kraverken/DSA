#include <iostream>
using namespace std;
int sum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return arr[0];
    }
    int output = sum(arr + 1, size - 1);
    int ans = arr[0] + output;
}
int main()
{
    int arr[5] = {2, 4, 6, 10, 10};
    int ans = sum(arr, 5);
    cout << ans;
    return 0;
}