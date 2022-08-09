// include all the sub strings of a string except for null
//  https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16
#include <iostream>
#include <vector>
using namespace std;
void solve(string str, string output, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }
    //     Exclude
    solve(str, output, index + 1, ans);
    //     Include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}
vector<string> subsequence(string s)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(s, output, index, ans);
    return ans;
}
int main()
{
    string s = "bbb";
    vector<string> ans = subsequence(s);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << ' ';
    return 0;
}