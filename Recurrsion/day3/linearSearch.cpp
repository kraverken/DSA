#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int t)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == t)
    {
        return true;
    }
    else
    {
        bool rest = linearSearch(arr + 1, size - 1, t);
        return rest;
    }
}
int main()
{
    int target;
    int arr[7] = {3, 7, 10, 13, 16, 19, 22};
    cout << "Enter target value ";
    cin >> target;
    bool ans = linearSearch(arr, 7, target);
    if (ans)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}