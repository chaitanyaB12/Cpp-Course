# include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    int temp = n;
    
    long long rev = 0;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n = n/10;
     
     }
    if(temp == rev){
        cout<<true<<endl;
    }
    else{
      cout<<false<<endl;
    }
    cout<<"The Palindrome Number is :" <<rev;
    
}