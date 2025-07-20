#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    int weight;
    int age;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class human {
    public:
    string color;

    void speak(){
        cout<<"speaking"<<endl;
    }
};

class hybrid: public human, public animal{

};

int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speak();
}