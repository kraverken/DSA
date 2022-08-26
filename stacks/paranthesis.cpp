#include <iostream>
#include <stack>
using namespace std;
bool validparenthesis(string s)
{
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            c.push(ch);
        }
        else
        {
            if (!c.empty())
            {
                char top = c.top();
                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{'))
                {
                    c.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
}
int main()
{
    string s;
    cin >> s;
    if (validparenthesis(s))
        cout << "Balanced Parenthesis";
    else
        cout << "Not balanced";

    return 0;
}