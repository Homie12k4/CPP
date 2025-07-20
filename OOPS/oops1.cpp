#include<iostream>
using namespace std;

class hero{
    //properties
    //char name[100];

    public:
    int health;
    char level;

};


int main(){
    //creating object
    hero pankaj;
    //size of object is size of class(its properties)
    //cout<<"size of h1 is:"<<sizeof(pankaj)<<endl; 

    pankaj.health=70;
    pankaj.level='A';

    cout<<"Pankaj ka  health " <<pankaj.health<<endl;
    cout<<"Pankaj ka level "<<pankaj.level<<endl;
}