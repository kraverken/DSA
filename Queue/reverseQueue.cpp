#include <iostream>
#include <stack>
#include <queue>
using namespace std;
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    while (!q.empty())
    {
        int e = q.front();
        q.pop();
        s.push(e);
    }
    while (!s.empty())
    {
        int e = s.top();
        s.pop();
        q.push(e);
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front() << endl;
    queue<int> ans = rev(q);
    cout << ans.front();
    return 0;
}