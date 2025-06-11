#include <iostream>
using namespace std;
int main(){
    int arr[]={32,2,4,6,8,49,3,7};
    int n=sizeof(arr)/4;
    int x=4;
    // int count=0;
    for(int i=0;i<n; i++){
        // count +=arr[i];
        if(arr[i]>x) 
        cout<<arr[i]<<" ";
    }
    //    count++;
}