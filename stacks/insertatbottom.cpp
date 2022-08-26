#include <iostream>
#include <stack>
using namespace std;
void pushatbottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    pushatbottom(s, x);
    s.push(num);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    int x;
    cout << "Enter element to push to bottom";
    cin >> x;
    cout << s.size() << endl;
    pushatbottom(s, x);
    for (int i = 0; i <= s.size(); i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << s.top();
    return 0;
}