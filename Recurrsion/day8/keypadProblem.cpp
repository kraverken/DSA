// Keypad problem to get combination for a string enetered
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
#include <iostream>
#include <vector>
using namespace std;
void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    //         base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterComb(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
        return ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}
int main()
{
    string digits;
    cout << "Enter the value for digits->";
    cin >> digits;

    vector<string> ans = letterComb(digits);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i] << ' ';
    return 0;
}