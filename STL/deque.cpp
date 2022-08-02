// Insertion and deletion at both ends
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    cout << endl;
    cout << "Element at 1st index->" << d.at(1) << endl;
    cout << "First Element " << d.front() << endl;
    cout << "Last Element " << d.back() << endl;
    cout << "Empty or not " << d.empty() << endl;
    cout << "Size of array " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size of array " << d.size() << endl;
}