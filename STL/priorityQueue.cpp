// The first element is always the greatest element(max-heap which is default) otherwise min-heap
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Max heap initialization
    priority_queue<int> maxi;

    // Min heap initialization
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Maxi is empty or not " << maxi.empty() << endl;
    cout << "Mani is empty or not " << mini.empty() << endl;
}