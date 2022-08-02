#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "Source->" << src << endl;
    // base case
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }
    src++;
    // Recursive call
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
    return 0;
}