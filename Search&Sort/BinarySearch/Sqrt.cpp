// To find the sqrt of a num using binary search
#include <iostream>
using namespace std;
long long int sqrtBinSearchInteger(int n)
{
    int s = 0;
    int e = n - 1;
    long long int mid = (s + e) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
double sqrtBinSearchFloat(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n, p;
    cout << "enter the number and precision scale u want" << endl;
    cin >> n >> p;

    int integerpart = sqrtBinSearchInteger(n);
    cout << "Precise answer will be " << sqrtBinSearchFloat(n, p, integerpart);
    return 0;
}