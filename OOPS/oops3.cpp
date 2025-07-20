#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class hero{
    //properties
    private:
    int health;

    public:
    char *name; 
    char level;

    hero(){
        cout<<"simple constructor called "<<endl; //for shallow copy(u gotta remove the copy constructor)
        name = new char[100];
    }
    hero(int health){
        this->health = health;
    }
    hero(int health, char level){
        this->level= level;
        this->health = health;
    }
    void print(){
        cout<< this->level<<endl;
        cout<<this->health<<endl;
        cout<<this->name<<endl;
        
        //cout<<health<<endl;A
    }
    hero( hero& temp){
        cout<<"copy constructor called"<<endl;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char l){
        level = l;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

};


int main(){
    // hero hero1(22,'B');
    // hero1.print();
    
    // hero hero2(hero1);
    // hero2.print();

    hero hero3;
    hero3.sethealth(33);
    hero3.setlevel('D');
    char name[7] = "Pankaj";
    hero3.setname(name);
    hero3.print();




    /*
    //creating object
    hero pankaj; //static allocation
    //size of object is size of class(its properties)
    //cout<<"size of h1 is:"<<sizeof(pankaj)<<endl; 

    //pankaj.health=70;
    
    pankaj.level='A';
    pankaj.sethealth(69);

    cout<<"Pankaj ka  health " <<pankaj.gethealth()<<endl;
    cout<<"Pankaj ka level "<<pankaj.level<<endl;

    hero *sans = new hero; //dynamic allocation
    sans->sethealth(55);
    sans->setlevel('B');

    cout<<" sans health is "<<sans->gethealth()<<endl;
    cout<<" sans level is "<<sans->getlevel()<<endl; */



}