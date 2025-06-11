#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 9, 1, 6, 8, 5, 34};
    int n = sizeof(arr) / 4;
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
        // mn = min(mn,arr[i]);
    }
    cout << mn;
}