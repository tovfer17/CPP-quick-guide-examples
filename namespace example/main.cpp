//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>
using namespace std;

namespace addition{
    int a =5;
    int b=5;
    int add(){
        return (a+b);
    }
}
int main(){
int result;
result = addition::add();
cout<<result<<endl;
return 0;
}
