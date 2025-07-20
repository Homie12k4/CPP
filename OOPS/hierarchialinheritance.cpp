#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class A{
    public:
    void func1(){
        cout<<"inside func1";
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"inside func2";
    }
};

class C:public A{
    public:
    void func3(){
        cout<<"inside fun3";
    }
};

int main(){
  
}