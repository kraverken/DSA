// Vector is a dynamic array itself where values are stored in contigous memory The difference is if we go out of bound while inserting elements it will create a new vector of double the size of original, copy all the elements into it and dump the original version
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5, 1); // initialize vector with size 5 and all values to be 1
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> copy(a); // Copy a vector into another
    for (int i : copy)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    v.push_back(4);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    v.push_back(5);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout << "Element at 2nd index->" << v.at(2) << endl;
    cout << "First Element " << v.front() << endl;
    cout << "Last Element " << v.back() << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "Size before clearing vector " << v.size() << endl;
    v.clear();
    cout << "Size after clearing vector " << v.size() << endl;
    cout << "Capacity after clearing vector " << v.capacity() << endl;
}
// Size tells us number of elements while capacity tells us the space allocated for the elements
// Clear clears the size not the capacity