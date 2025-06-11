#include<iostream>
using namespace std;
int main(){
    int arr[]= {4,3,5,7,8,2};
    int n=sizeof(arr)/4;
    for(int i=0; i<n; i++){
      if(i%2==0)
      cout<<arr[i]+10<<" ";
      else
        cout<<arr[i]*2<<" ";
      
    }
}