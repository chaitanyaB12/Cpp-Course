#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0)
        for(int j=1; j<=i; j++){
            cout<<j;
    }
        else {
            for(int j=1;j<=i;j++)
            cout<<(char)(j+96);
            
        }
            cout<<endl;
    }
}