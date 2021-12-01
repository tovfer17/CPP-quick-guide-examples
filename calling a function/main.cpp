//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>
using namespace std;


//function declaration
int max (int num1,int num2);

int main(){
    //local variable declaration
    int a =100;
    int b =200;
    int ret;
    
    //calling a function to get max value
   ret= max(a,b);
   cout<< " max value is: "<<ret<<endl;
}

//function returning the max between two numbers
int max(int num1, int num2){
    //local variable declaration
    
    int result;
    
    
    if(num1>num2)
        result =num1;
    else 
        result=num2;
        
    return result;
    
    // num1>num2 ? result=num1 : result=num2
}


