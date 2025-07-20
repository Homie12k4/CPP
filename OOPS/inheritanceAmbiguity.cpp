#include<iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"hello from 1"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"hello from 2"<<endl;
    }
};

class C:public A, public B{

};
int main(){
    C obj1;
    obj1.A::fun();

    C obj2;
    obj2.B::fun();
}