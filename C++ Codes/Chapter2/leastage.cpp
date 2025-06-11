#include<iostream>
using namespace std;
int main(){
    int Ram;
    cout<<"Age Of Ram Is :";
    cin>>Ram;
    int Shyam;
    cout<<"Age Of shyam Is :";
    cin>>Shyam;
    int Ajay;
    cout<<"Age Of Ajay Is :";
    cin>>Ajay;
    if(Ram < Shyam){
        if(Ram <Ajay){
            cout<<"Ram Is The Youngest";
        }
        else{
            cout<<"Ajay Is The Youngest";
        }
    }
    else{
        if(Shyam < Ajay){
            cout<<"Shyam Is The Youngest";
        }
        else{
            cout<<"Ajay Is The Youngest";
        }
    }
}