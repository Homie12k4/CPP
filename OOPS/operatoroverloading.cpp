#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    public:
    int add(int a,int b){
        return a+b;
    }

    void operator+ (A &temp){ 
        int val1= this->a;
        int val2 = temp.a;
        cout<<val2 - val1<<endl;
    }
};

int main(){
    A obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
}