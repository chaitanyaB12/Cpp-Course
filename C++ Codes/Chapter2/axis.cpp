#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Insert The Value Of x :";
    cin>>x;
    int y;
    cout<<"Insert The Value Of y :";
    cin>>y;
    if(x>0 && y>0){
        cout<<"Point Is In First Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"Point Is In Second Quadrant";
    }
    else if (x<0 && y<0){
        cout<<"Point Is In Third Quadrant";
    }
    else {
        cout<<"Point Is In Fourth Quadrant";
    }    
}