//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr = &a[0];
    cout << "value of *ptr is: "<< *ptr<<"\n";
    cout << "value of *++ptr: "<<*++ptr<<endl;
    return 0;
}