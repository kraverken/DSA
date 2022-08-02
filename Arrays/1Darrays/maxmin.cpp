#include <iostream>
#include <math.h>
using namespace std;
int getMax(int arr[], int n)
{
    int maxnum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        // maxnum = max(maxnum, arr[i]);
        if (maxnum < arr[i])
        {
            maxnum = arr[i];
        }
    }
    return maxnum;
}
int getMin(int arr[], int n)
{
    int minnum = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        // minnum=min(minnum,arr[i]);
        if (minnum > arr[i])
        {
            minnum = arr[i];
        }
    }
    return minnum;
}
int sumarr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int a = getMax(num, 5);
    cout << a << endl;

    int b = getMin(num, 5);
    cout << b << endl;

    int c = sumarr(num, 5);
    cout << c << endl;
    return 0;
}
/*
when we define a function to do operation on an array lets say
func(int arr[],int n)
and on calling we do
func(num,a)
so here we are passing the address of the first index of array to the function hence any changes will take place in the main() also unlike pass by value where a copy is created and there the changes are made
*/