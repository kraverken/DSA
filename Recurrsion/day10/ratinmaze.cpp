/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
        return false;
}
void solve(vector<vector<int>> &m, int n, vector<string> &ans, int srcx, int srcy, vector<vector<int>> visited, string path)
{
    // base case
    if (srcx == n - 1 && srcy == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[srcx][srcy] = 1;

    // down
    int newx = srcx + 1;
    int newy = srcy;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // Left
    newx = srcx;
    newy = srcy - 1;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // Right
    newx = srcx;
    newy = srcy + 1;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    // Up
    newx = srcx - 1;
    newy = srcy;

    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[srcx][srcy] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    if (m[0][0] == 0)
        return ans;
    int srcx = 0, srcy = 0;
    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<vector<int>> m = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = m.size(); // as it is a matrix lets assume it has same rows and cols
    vector<string> ans = findPath(m, n);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << " ";
    return 0;
}

/*
Approach for the following code is that we have to go from 0,0 to n-1, n-1 and store the path for the same
we make a similar matrix and name it visited and set all values to 0 oncea we visit a node we set it to 1 (also backtrack to 0 when we go back to find another path)
There are 4 possobel moves Up,Left,Right,Down which have their default values updated some x and some y then what we do is check that is it evean possible to do that move based on condition isSafe then we push the letter U,L,R,D accordingly and then pop it on our way back in backtracking
*/
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1},
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}