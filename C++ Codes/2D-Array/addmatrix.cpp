#include<iostream>
using namespace std;
int main(){
    int a[2][2]={{6,3},{8,4}};
    int b[2][2]={{4,8},{12,56}};
    int c[2][2];
    for(int i=0; i<2;i++){
        for(int j=0; j<2; j++){
         c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}