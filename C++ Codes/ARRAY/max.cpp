#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 3, 8, 1, 7, 9};
    int n = sizeof(arr) / 4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        // if(arr[i]>mx) mx=arr[i];
        mx = max(mx, arr[i]);
    }
    cout << mx;
}