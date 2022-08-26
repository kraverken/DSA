#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string revstr = "";
    while (!s.empty())
    {
        char ch = s.top();
        revstr.push_back(ch);
        s.pop();
    }
    cout << revstr;
    return 0;
}