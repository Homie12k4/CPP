#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog: public animal{

};

class kaalu:public dog{

};

int main(){
    dog d;
    d.speak();
    cout<<d.age<<endl;

    kaalu k;
    k.speak();
}