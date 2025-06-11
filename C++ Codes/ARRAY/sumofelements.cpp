#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,8,6,9,21};
    int n=sizeof(arr)/4;
    int sumeven=0;
    int sumodd=0;
    for(int i=0; i<n; i++){
      if(i%2==0){
        sumeven +=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
     int diff= sumeven-sumodd;
     cout<<"The Difference Between even and odd is :"<<diff;   
}