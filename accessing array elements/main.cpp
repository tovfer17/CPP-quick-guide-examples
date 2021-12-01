//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
   int n[10]; //n is an array of 10 integers
   
   //initialize elements of array n to 10
   
   for (int i=0; i<10; i++){
       n[i]=i+100; //set element at location i to i +100
   }
   cout<< "element"<<setw(13)<<"value"<<endl;
   
   //output each array element's value
   for(int j=0;j<10;j++){
       cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
   }
   return 0;
}

