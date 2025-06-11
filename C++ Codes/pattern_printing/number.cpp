#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows :";
    cin>>m;
    for(int x=1; x<=m;x++){
        for(int y=1; y<=m;y++){
        cout<<y<<" ";
    }
        cout<<endl;
    }
}