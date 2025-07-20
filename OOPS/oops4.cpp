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
    static int timetocomplete;

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

    ~hero(){
        cout<<"destructor called"<<endl;
    }

};
int hero::timetocomplete=5;


int main(){

    cout<<hero::timetocomplete;





    // hero h1;
    // hero *h2 = new hero();
    // delete h2; // have to be called manually for dynamic object 

    // hero hero1(22,'B');
    // hero1.print();
    
    // hero hero2(hero1);
    // hero2.print();

    // hero hero3;
    // hero3.sethealth(33);
    // hero3.setlevel('D');
    // char name[7] = "Pankaj";
    // hero3.setname(name);
    // hero3.print();





}