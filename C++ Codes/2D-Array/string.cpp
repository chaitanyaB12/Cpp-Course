#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter A String :";
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        if(i%2!=0){
            cout<<s;
        }
    }
}