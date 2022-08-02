#include <iostream>
using namespace std;
void print(int *p)
{
    cout << p << endl;
}
void update(int *p)
{
    // p += 1;
    *p += 1;
}
int getSum(int *arr, int n)
{
    cout << "Size-> " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    cout << "The address of value is " << endl;
    print(p);
    update(p);
    cout << "The address of value is " << endl;
    print(p);
    cout << "The value of value after update is " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 8};
    cout << "Sum is " << getSum(arr + 3, 3) << endl;
    return 0;
}

/*
We cant change the address when we input pointer as param in a function but we can surely change the value for a variable
Basically when we pass an array as an argument it is the pointer for that array that is passed in reality so arr[] and *arr are technically the same
arr[i] means *(arr+i)
using pointers we can actually pass a part of array in a function rather than the whole array
*/