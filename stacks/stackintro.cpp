#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    cout << s.top() << endl;
    cout << "Size of stack is " << s.size() << endl;

    if (s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack has elements";
    }
    return 0;
}

/*
LIFO
stack overflow
stack underflow
*/