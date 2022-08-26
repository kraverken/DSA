#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &stack, int element)
{
    if (stack.empty())
    {
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, element);
    stack.push(num);
}
void reverseStack(stack<int> &stack)
{
    // Write your code here
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    //     recursive call
    reverseStack(stack);
    insertAtBottom(stack, num);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    reverseStack(s);
    cout << s.top();

    return 0;
}
// TC O(n^2)
