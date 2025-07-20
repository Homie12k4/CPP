#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    string name;
    int age;
    int standard;

    public:
    int getage(){
        return this->age;
    }
};

class human{
    protected:
    int height;
    public:
    int weight;
    private: //won't be able to access it if private
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;
    }
};

class male: protected human{
    public:
    string color;

    void sleeping(){
        cout<<"male sleeping";
    }
    int getheight(){
        return this->height; 
    }
};

int main(){

    male m1;
    //cout<<m1.height<<endl;
    //cout<< m1.age<<endl;
    cout<<m1.getheight()<<endl;
    
    return 0;
}