// FIFo First In First Out
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    queue<string> s;
    s.push("Aryan");
    s.push("Mahesh");
    s.push("Verma");

    cout << "size before pop " << s.size() << endl;

    cout << "First Element " << s.front() << endl;
    s.pop();
    cout << "First Element " << s.front() << endl;

    cout << "Size after pop " << s.size() << endl;
}
