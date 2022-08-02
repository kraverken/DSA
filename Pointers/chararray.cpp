#include <iostream>
using namespace std;
int main()
{
    char ch[6] = "dawdf"; // ends with nuil character
    cout << ch << endl;   // here we dont get the address we get the char array itself

    char *c = &ch[0];
    cout << c << endl; // prints the entire array contents
    cout << *c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    return 0;
}
/*
Implementation of the cout function in case of character arrays is different. It tends to always print the contents of the array until it finds a null character
*/