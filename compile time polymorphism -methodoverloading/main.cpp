//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>
using namespace std;

class Mutiply
{   
    public:
    int mul(int a, int b)
    {
        return (a*b);
    }
    int mul (int a, int b, int c)
    {
        return (a*b*c);
    }
    
};

int main(){
    Mutiply multi;
    int res1, res2;
    res1 = multi.mul(2,3);
    res2= multi.mul(2,3,4);
    cout<<"\n";
    cout<<res1;
    cout<<"\n";
    cout<<res2<<endl;
    return 0;
};

