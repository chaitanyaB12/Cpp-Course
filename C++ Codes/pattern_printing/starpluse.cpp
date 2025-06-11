#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows :";
    cin>>m;
    int mid =m/2+1;
    for(int x=1; x<=m;x++){
        for(int y=1; y<=m;y++){
            if(x==mid || y==mid)
                 cout<<"* ";
            else
                cout<<"  ";
            
    }
   cout<<endl;
    }
}