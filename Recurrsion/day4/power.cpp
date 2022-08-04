#include <iostream>
using namespace std;
int powerTo(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    int output = powerTo(x, y / 2);

    // even
    if (y % 2 == 0)
        return output * output;
    // odd
    else
        return x * output * output;
}
int main()
{
    int a, b;
    cout << "Enter the values-> ";
    cin >> a >> b;
    int ans = powerTo(a, b);
    cout << ans;
    return 0;
}