#include <iostream>
using namespace std;
int main()
{
    /*
        int arr[10] = {23, 122, 41, 67};
        cout << "Address of first memory block is " << arr << endl;
        cout << "Value of first memory block is " << arr[0] << endl;
        cout << "Address of first memory block is " << &arr[0] << endl;
        cout << "Value of first memory block is " << *arr << endl;
        cout << "Value of first memory block  +1 is " << *arr + 1 << endl;
        cout << "Value of second memory block is " << *(arr + 1) << endl;

        cout << "Value of Third memory block is " << arr[2] << endl;
        cout << "Value of Third memory block is " << *(arr + 2) << endl;

        int i = 3;
        cout << i[arr] << endl;
    */
    /*

        int temp[10];
        cout << sizeof(temp) << endl;
        cout << "size of pointer " << sizeof(*temp) << endl;
        cout << "size of address " << sizeof(&temp) << endl;

        int *ptr = &temp[0];
        cout << sizeof(ptr) << endl;
        cout << sizeof(*ptr) << endl;
        cout << sizeof(&ptr) << endl;
    */

    /*
        int a[20] = {1, 2, 3, 5};
        cout << &a[0] << endl;
        cout << &a << endl;
        cout << a << endl;

        int *p = &a[0];
        cout << p << endl;  // value of p that is the address of a
        cout << *p << endl; // value at address of pointer p
        cout << &p << endl; // address of pointer
    */
    int arr[10];
    // arr = arr + 1; // throw error type is not reassingable
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr += 1;
    cout << ptr << endl;
    return 0;
}