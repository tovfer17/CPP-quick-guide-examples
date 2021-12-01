//https://www.javatpoint.com/cpp-interview-questions
#include <iostream>  
using namespace std;  
int main()  
{  
int a[5]={1,2,3,4,5};  
int *ptr;  
ptr=&a[2];  
cout<<"Value of *ptr is : "<<*ptr<<"\n";  
cout<<"Value of *ptr++ : "<<*ptr++<<endl;  
return 0;  
}  