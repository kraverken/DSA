// https://leetcode.com/problems/fibonacci-number/submissions/
#include <iostream>
using namespace std;
int fibonnacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;

    int output = fibonnacci(n - 1) + fibonnacci(n - 2);
    return output;
}
int main()
{
    int n;
    cout << "Enter the term you want in series ";
    cin >> n;
    int ans = fibonnacci(n);
    cout << ans;
    return 0;
}