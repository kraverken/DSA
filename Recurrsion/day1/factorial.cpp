#include <iostream>
using namespace std;
long factorial(int n)
{
    int fact = 0;
    if (n == 0)
    {
        return 1;
    }
    fact = n * factorial(n - 1);
    return fact;
}
int main()
{
    int num;
    cout << "Enter number";
    cin >> num;
    long ans = factorial(num);
    cout << ans << endl;
    return 0;
}

/*
Importance of base case is that it ensures that function call stack does not overflow and cause segmentation fault
*/