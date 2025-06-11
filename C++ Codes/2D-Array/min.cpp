#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][2]={{12,76},{43,2},{5,45},{66,89}};
    int mn = INT_MAX;
    for(int i=0;i<4;i++){
        for(int j=0; j<2;j++)
        mn = min(mn,arr[i][j]);
    }
        cout<<mn;
}