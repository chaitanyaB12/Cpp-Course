#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows :";
    cin>>m;
    int n;
    cout<<"Enter no of columns :";
    cin>>n;
    for(int x=1; x<=m;x++){
        for(int y=1; y<=n;y++){
        cout<<"* ";
    }
   cout<<endl;
    }
}