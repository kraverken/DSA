// stored in key value pair with unique keys ... 1 key points to only 1 value, 2 keys might point to same value
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Aryan";
    m[2] = "Mahesh";
    m[13] = "Verma";
    m.insert({5, "Sexual"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13-> " << m.count(13) << endl;
    m.erase(13);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl; // if 13 would have been not deleted then 13 would also have been printed
    }
}

// ordered map(red-black trees)->insert erase find count O(logn)
// unordered_map(hash table)->searching O(1)