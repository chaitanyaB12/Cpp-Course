#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"The Length is :";
    cin>>l;

    int b;
    cout<<"Breadth is :";
    cin>>b;
    
    int a = l*b;
    cout<<"The Area Of Rectangle Is :"<<a<<endl;
    int p =2*(l+b);
    cout<<"perimeter is :"<<p<<endl;
    if(a>p){
        cout<<"Area Of rectangle is Greater Than Perimeter";
    }
    else if(p>a){ 
        cout<<"Perimeter Is Greater";
        }
    else if(a==p){
        cout<<"Area Of Reactangle is Equal To It's Perimeter";
    }    
}