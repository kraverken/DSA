// Count ways to reach n-th stair https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
#include <iostream>
using namespace std;
int countWays(int n)
{
    if (n < 0)
        return 0; // No way that number of stairs is -ve
    else if (n == 0)
        return 1; // from oth to oth stair only one way that we dont move

    int output = countWays(n - 1) + countWays(n - 2);
    return output;
}
int main()
{
    int n;
    cout << "Input the number of stairs ";
    cin >> n;
    int ans = countWays(n);
    cout << endl;
    cout << ans;
    return 0;
}