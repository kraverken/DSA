#include <iostream>
#include <array>
using namespace std;
int main()
{
    // array<type,size> nameofarray={values}
    array<int, 4> a = {1, 2, 3, 4};
    cout << a.size() << endl;

    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index->" << a.at(2) << endl;
    cout << "Empty or not " << a.empty() << endl;
    cout << "First Element " << a.front() << endl;
    cout << "Last Element " << a.back() << endl;
}