#include<iostream>
using namespace std;
// int main(){
//     int m;
//     cout<<"Enter no of rows :";
//     cin>>m;
//     for(int x=1; x<=m;x++){
//         for(int y=1; y<=x;y++){
//         cout<<x<<" ";
//     }
//    cout<<endl;
//     }
// }

void nStarTriangle(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";  
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    nStarTriangle(N);
    return 0;
}