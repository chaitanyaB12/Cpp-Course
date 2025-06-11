#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{12,76},{32,93},{11,34},{15,89}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}