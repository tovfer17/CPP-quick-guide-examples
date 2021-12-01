//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>
using namespace std;

class Addition
{
    int a =5;
    int b=6;
    public:
    friend int add(Addition a1){
        return (a1.a + a1.b);
    }
};
int main(){
    int result;
    Addition a1;
    result = add(a1);
    cout<<result;
    return 0;
}
