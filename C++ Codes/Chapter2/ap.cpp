#include<iostream>
using namespace std;
//print 4,7,10,13,16,19...
int main(){
//     int n;
//     cout<<"Enter Number :";
//     cin>>n;
//     for(int i=4; i<=3*n+1; i=i+3)
//     cout<<i<<" ";


   // 5,15,45,135,405...
        int n;
        cout<<"Enter A Number :";
        cin>>n;
        int a=5;
        
        for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a*3;
        }
    
}