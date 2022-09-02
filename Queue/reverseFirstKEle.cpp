#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    stack<int> s;
    for (int i = 0; i < k; i++)
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
    for (int i = 0; i < q.size() - k; i++)
    {
        int e = q.front();
        q.pop();
        q.push(e);
    }
    return q;
}
int main()
{
    int k = 2;
    queue<int> q;
    queue<int> ans = modifyQueue(q, k);
    return 0;
}