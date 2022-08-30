#include <iostream>
#include <stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isredundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isredundant = false;
                    }
                    st.pop();
                }
                if (isredundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}
int main()
{
    string s;
    cout << "Enter string";
    cin >> s;
    if (findRedundantBrackets(s))
    {
        cout << "Redundant brackets found";
    }
    else
    {
        cout << "No redundant brackets found";
    }
    return 0;
}