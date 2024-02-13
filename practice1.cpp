//example of function overloading

#include<iostream>
using namespace std;

class A{

    private:
    int a=5,b=4,add=0;

    public:
    
    int sum(int x, int y){
        add=x+y;

    }
    int sum(){
        add=a+b;
    }
    void Display(){
        cout<<add;
    }
    
};

int main(){
    A a;
    a.sum();
    a.Display();
    a.sum(2,3);
    a.Display();

    return 0;
}