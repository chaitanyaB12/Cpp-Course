#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=1;
}
int main(){
    int arr[]={4,5,6,8};
    for(int i=0; i<=3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0; i<=3; i++){
        cout<<arr[i]<<" ";
    }
}
