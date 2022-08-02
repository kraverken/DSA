#include <iostream>
using namespace std;
bool linsearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return 1;
    }
    return 0;
}
int main()
{
    int arr[5];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    bool found = linsearch(arr, 5, 6);
    if (found)
        cout << "The element is found" << endl;
    else
        cout << "The element is not found" << endl;
    return 0;
}