// https://leetcode.com/problems/search-a-2d-matrix/submissions/
// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrixbothsorted(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rIndex = 0;
    int cIndex = col - 1;
    while (rIndex < row && cIndex >= 0)
    {
        int element = matrix[rIndex][cIndex];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
            rIndex++;
        else
            cIndex--;
    }
    return 0;
}
bool searchMatrix(vector<vector<int>> matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
            return 1;
        else if (element > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return 0;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    vector<vector<int>> matrixbothsorted = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

    int target;
    cout << "Enter your target element" << endl;
    cin >> target;
    if (searchMatrixbothsorted(matrix, target))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}

// Time Complexity->O(logm*n)