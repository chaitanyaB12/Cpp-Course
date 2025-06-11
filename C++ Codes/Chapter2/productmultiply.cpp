#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int product =1;
    while(n>1){
        int ld=n%10;
        n = n/10;
        product=ld*product;
    }
    cout<<product;
}