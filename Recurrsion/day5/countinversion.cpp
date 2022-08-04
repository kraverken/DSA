/*
Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/
#include <iostream>
using namespace std;
int merge(int *arr, int s, int e)
{
    int ans = 0;

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s; // main array index

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            ans += (len1 - index1);
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    return ans;
    delete[] first;
    delete[] second;
}

int count(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return 0;
    }

    int mid = (s + e) / 2;

    // left part sort karna h
    int inv = count(arr, s, mid);

    // right part sort karna h
    inv += count(arr, mid + 1, e);

    // merge
    inv += merge(arr, s, e);

    return inv;
}
int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = count(arr, 0, n - 1);
    cout << " Number of inversions are " << ans;
    return 0;
}

// Time Complexity: O(n log n), The algorithm used is divide and conquer, So in each level, one full array traversal is needed, and there are log n levels, so the time complexity is O(n log n).
//  Space Complexity: O(n), Temporary array.