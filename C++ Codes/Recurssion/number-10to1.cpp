#include<iostream>
using namespace std;
int num(int n){
    if(n==11) return 11;
    num(n+1);
    cout<<n<<endl;
}
int main(){
    num(1);
}