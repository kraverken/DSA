#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    (*p)++;
    cout << num << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // Pointer Arithmentic
    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "Before t " << t << endl;
    t = t + 1; // adds the address to next integer 4 bytes for integer
    cout << "After t " << t << endl;
    return 0;
}