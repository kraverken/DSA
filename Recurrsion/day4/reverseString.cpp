#include <iostream>
using namespace std;
void reverse(string &s, int start, int end)
{
    // base case
    if (start > end)
        return;
    swap(s[start], s[end]);
    start++;
    end--;

    reverse(s, start, end);
}
int main()
{
    string name = "Aryan";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}