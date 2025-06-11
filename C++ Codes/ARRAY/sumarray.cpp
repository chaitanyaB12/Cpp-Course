#include<iostream>
using namespace std;
int main(){
    // char x =6;
    // cout<<sizeof(x);
    int arr[]={4,2,7,9,3,5};
    int n =sizeof(arr)/4;
    int sum=0;
    for(int i=0; i<n;i++){
        sum +=arr[i];
    }
    cout<<sum;
}