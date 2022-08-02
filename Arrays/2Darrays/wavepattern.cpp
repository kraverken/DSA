// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1
#include <iostream>
#include <vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Write your code here
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col % 2 != 0)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    vector<int> ans = wavePrint(arr, 4, 3);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity -> O(n*m)
