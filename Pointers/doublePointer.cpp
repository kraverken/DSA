#include <iostream>
using namespace std;
void update(int **p)
{
    // cout << p << endl;
    // p += 1; // does update the address of p1(stored in p2) but only in this update scope sop actually no update
    // *p += 1; // updates the address of i
    // updates the value of i
    // cout << p << endl;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*
        cout << "Address of p is " << &p << endl;

        cout << "P's value that is address of i is  " << &i << endl;
        cout << "P's value that is address of i is  " << p << endl;
        cout << "P's value that is address of i is  " << *p2 << endl;

        cout << "Address of p is " << &p << endl;
        cout << "Address of p is " << p2 << endl;

        cout << "Value of i is " << i << endl;
        cout << "Value of i is " << *p << endl;
        cout << "Value of i is " << **p2 << endl;

        cout << "address of p2 is " << &p2 << endl;
    */
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;
    update(p2);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;

    return 0;
}