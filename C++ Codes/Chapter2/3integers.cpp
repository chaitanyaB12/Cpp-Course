#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Value Of A :";
    cin>>a;
    int b;
    cout<<"Enter Value of B :";
    cin>>b;
    int c;
    cout<<"Enter Value Of c :";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is Greater";
    }
    else if(b>a && b>>c){
        cout<<"B is the Greatest";
    }
    else{
        cout<<"C is the Greateast";
    }
}