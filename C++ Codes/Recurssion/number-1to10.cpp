#include<iostream>
using namespace std;
int num(int n){
    if(n>10) return 10;
    cout<<n<<endl;;
     num(n+1);
}
int main(){
    num(1);
}