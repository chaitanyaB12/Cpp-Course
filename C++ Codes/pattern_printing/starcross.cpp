#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int x=0; x<n;x++){
      for(int y=0; y<n;y++){
        if(x==y || x+y==n-1)
        cout<<"* ";
        else{
            cout<<"  ";
        }
    }
        cout<<endl;
    }
}