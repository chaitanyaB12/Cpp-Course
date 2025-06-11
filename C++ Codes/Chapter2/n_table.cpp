#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a table Number :";
    cin>>n;
    for(int i=n ;i<=n*10 ; i=i+n){
        if(i%2==0){
            cout<<i<<" ";
        }
        else if(i%1==0){
            cout<<i<<" ";
        }
    }
    
}