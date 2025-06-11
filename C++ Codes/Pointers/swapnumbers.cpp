#include<iostream>
using namespace std;
int main(){
    int x=2;
    int y=4;
    cout<<x<<" "<<y<<endl;
    int* ptr=&x;
    int* p=&y;
    *ptr=4;
    *p=2;
    cout<<x<<" "<<y<<endl;
}