#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    //         Index initailisation
    int count = 0;
    int total = row * col;
    int sRow = 0, sCol = 0;
    int eRow = row - 1, eCol = col - 1;

    while (count < total)
    {
        //             Print Starting Row
        for (int i = sCol; count < total && i <= eCol; i++)
        {
            ans.push_back(matrix[sRow][i]);
            count++;
        }
        sRow++;

        //             Print Ending Col
        for (int i = sRow; count < total && i <= eRow; i++)
        {
            ans.push_back(matrix[i][eCol]);
            count++;
        }
        eCol--;

        //             Print Ending Row
        for (int i = eCol; count < total && i >= sCol; i--)
        {
            ans.push_back(matrix[eRow][i]);
            count++;
        }
        eRow--;
        //             Print Starting Col
        for (int i = eRow; count < total && i >= sRow; i--)
        {
            ans.push_back(matrix[i][sCol]);
            count++;
        }
        sCol++;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralOrder(matrix);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity -> O(n*m)