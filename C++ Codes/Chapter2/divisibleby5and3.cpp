#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter A Number :";
    cin>>n;
    
    if(n%5==0 && n%3==0){
        cout<<"Divisible By 5 and 3";
    }
    else{
        cout<<"Not Divisible By 5 and 3";
    }
}