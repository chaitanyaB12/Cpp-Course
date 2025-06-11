#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }

int main(){
    int n=19;
    int sum = 0;
    for(int i=19;i<=n*10; i=i+19){
        cout<<i<<" ";
        sum=sum+i;
    }
     cout<<sum<<" ";
}