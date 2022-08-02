#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int n, int m) // we have to specify the columns
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
void printrowsum(int arr[][4], int n, int m)
{
    cout << "Printing row wise sum" << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum for row " << i << " is " << sum << endl;
    }
}
int main()
{
    // Declaration
    int arr[3][4];
    // Take input
    cout << "Enter value for arrays" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    /*
        --output array--

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    */

    /*
        --Searching Element in Array--

        int target;
        cout << "Enter target value to search for" << endl;
        cin >> target;
        if (isPresent(arr, target, 3, 4))
        {
            cout << target << " is present in the array" << endl;
            ;
            return 0;
        }
        else
        {
            cout << target << " is not present in the array" << endl;
        }
    */
    printrowsum(arr, 3, 4);
}