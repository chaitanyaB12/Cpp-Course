#include<iostream>
using namespace std;
int main(){
    int rows=4;
    int columns=4;
    for(int x=0; x<rows;x++){
      for(int y=0; y<columns;y++){
        if(x==0 || y==0 || x==rows-1 || y==columns-1 )
        cout<<"* ";
        else{
            cout<<"  ";
        }
    }
        cout<<endl;
    }
}