#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 3-> " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    cout << "a and b are" << a << " " << b << endl;
    swap(a, b);
    cout << "a and b are" << a << " " << b << endl;

    string s = "abcd";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin(), s.end() - 1);
    cout << s << endl;

    cout << "Before rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); // based on introsort algo
    for (int i : v)
    {
        cout << i << " ";
    }
}