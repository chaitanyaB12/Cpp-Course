#include<iostream>
using namespace std;

class Hero{
    private:
    int  health;
    public:
    char level;
    void print(){
    cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int g){
        health = g;
    }
    void setlevel(char c){
        level = c;
    }
};


int main(){
    Hero *b;

    cout<<b->gethealth()<<endl;
     (*b).sethealth(70);
     (*b).setlevel('A');

    cout<<"Health is :"<<(*b).gethealth()<<endl;
    cout<<"Level is :"<<(*b).level<<endl;

    cout<<"health is :"<<b->gethealth()<<endl; // the line (->) is used for pointer address
    cout<<"Level is :"<<b->getlevel()<<endl;

    return 0;
}