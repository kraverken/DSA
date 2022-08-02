#include <iostream>
using namespace std;
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int dost[20] = {1, 3, 5, 7};
    // print_arr(dost, 20);
    cout << endl;
    int num[10] = {0};
    // print_arr(num, 10);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }

    int sizedost = sizeof(dost) / sizeof(int);
    cout << sizedost << endl;
    return 0;
}
//  If we declare an array of size 20 but end up using only 3 by storing 3 items then this sizeof method still gives the answer back as 20