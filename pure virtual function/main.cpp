//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>
using namespace std;

class Base {
    public:
    virtual void show()=0;
};

class Derived:public Base{
    public:
    void show()
    {
        cout<<"javaTpoint"<<endl;
    }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->show();
    return 0;
}
