//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>
using namespace std;

int sum(int a, int b =20){
    int result;
    result=a+b;
    
    return (result);
}

int main()
{
    //local variable declaration
    int a =100;
    int b=200;
    int result;
    
    //calling a function to add the values
    result=sum(a,b);
    cout<<" total value is: "<<result<<endl;
    
    //calling a function again as follows
    result=sum(a);
    cout<<"Total value is: "<<result<<endl;

    return 0;
}

