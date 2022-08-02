// Check if array is sorted and rotated
#include <iostream>
#include <vector>
using namespace std;
int check(vector<int> a)
{
    int count = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] > a[i])
            count++;
    }
    if (a[a.size() - 1] > a[0])
        count++;

    if (count <= 1)
        return true;
    else
        return false;
}
int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(6);

    int a = check(nums);
    if (a == true)
        cout << "Array is sorted and rotated";
    else
        cout << "Not sorted";
    return 0;
}