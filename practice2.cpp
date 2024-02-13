//example of inheritance and function overriding

#include<iostream>
using namespace std;
class numbers{
    int sum=0,a=1,b=2;
    public:
    int add(){
        sum=a+b;
        cout<<sum;
    }
};
class integers: public numbers{
    int a=3,b=4,sum=0;
    public:
    int add(){
        sum=a+b;
        cout<<sum;
    }

};
int main(){
    numbers n;
    integers i;
    n.add();
    i.add();

    return 0;
}