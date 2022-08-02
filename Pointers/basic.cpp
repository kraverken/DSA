#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter value" << endl;
    cin >> num;
    // Address of operator
    cout << "Address of num is " << &num << endl;

    int *p = 0; // null pointer
    int *ptr = &num;

    cout << "Address of num is " << ptr << endl;
    cout << "Value at address of " << ptr << " is " << *ptr << endl;
    // cout << "Value at address of " << p << " is " << *p << endl; // segmentation fault for a pointer that points to null memory address

    cout << "Size of num is " << sizeof(num) << endl;
    cout << "Size of Pointer is " << sizeof(ptr) << endl;
    cout << "Size of Null Pointer is " << sizeof(p) << endl;

    return 0;
}
/*

Pointers are used to store address of variables

int *p -> means p is pointer to int data type

*-> is dereference operator

*p-> value at address

size is mostly 8 bytes for a pointera as it stores the address(idk why it is 4 here)

{
    int *p=0;
    p=&i;
is same as
    int *p=&i;
}

*/