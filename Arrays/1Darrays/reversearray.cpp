#include <iostream>
#include <vector>
using namespace std;
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reversearr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
vector<int> reverse(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}
int main()
{
    int arr[6] = {1, 4, 6, 9, 10, 45};
    int brr[5] = {43, 54, 65, 53, 23};

    reversearr(arr, 6);
    reversearr(brr, 5);

    print_arr(arr, 6);
    print_arr(brr, 5);

    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> ans = reverse(v);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}