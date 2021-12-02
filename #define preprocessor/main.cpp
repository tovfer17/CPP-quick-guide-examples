//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
#define PI 3.14159
#define MIN(a,b) (((a)<(b)) ? a : b) //function like macro

int main()
{
    int area;
    int i, j;
    
    i = 100;
   j = 30;
   
   cout <<"The minimum is " << MIN(i, j) << endl;
    area= LENGTH*WIDTH;
    cout<<area;
    cout<<NEWLINE;
    cout << "Value of PI :" << PI << endl; 
    return 0;
    
}
