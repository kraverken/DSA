#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> a, int n, vector<int> b, int m, vector<int> c)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++; // we can also do c[k++]=a[i++] to lessen our work
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }
    // copy first array elements remaining
    while (i < n)
    {
        c.push_back(a[i]);
        i++;
    }

    // copy second array elements remaining
    while (j < m)
    {
        c.push_back(b[j]);
        j++;
    }
    return c;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    vector<int> v3;

    vector<int> ans = merge(v1, 5, v2, 3, v3);

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}