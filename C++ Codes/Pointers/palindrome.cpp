#include<iostream>
using namespace std;
int main(){
        int x;
        cout<<"Enter N :";
        cin>>x;
        int r, temp;
        int sum = 0;
        temp = x;
        while (x > 0) {
            r = x % 10;
            sum = sum * 10 + r;
            x = x / 10;
        }
        if (temp == sum) {
            cout<<"Number Is Palindrome";
        }
        else if (temp != sum) {
            cout<<"Number Is Not Palindrome";
        }
        
    }
