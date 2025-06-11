#include<iostream>
using namespace std;
// void usa(){
//     cout<<"You Are In USA";
//     usa();
// }
// void india(){
//     cout<<"You Are In India"<<endl;
// }
// int main(){
//     cout<<"You Are in Main"<<endl;
//     india();
//     usa();
// }
void bat(int n){
    if (n==0)
     return;    
    cout<<"helllooooo"<<endl;
    bat(n-1);

}
int main(){
    cout<<"Hey!"<<endl;
    bat(4);
}