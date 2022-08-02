// Stores only unique values no duplicates allowed (in backend implementation is thru bst)... once element is added no midification is allowed only new and delete no update
// Sorted elements are returned in set and randomly in unsorted set(faster then ordered)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0); // only once in a set
    // insertion complexity O(logn)

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not-> " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5); // returns the iterator
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// insert,find,erase,count->O(logn)
// size,begin,end,empty->O(1)