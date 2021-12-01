//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>
using namespace std;

/* this program shows the difference betweem 
    *signed and unsigned integers
*/

int main()
{
    short int i; //a signed short integer
    short unsigned int j; //an unsigned short integer
    
    j=50000;
    
    i=j;
    cout<<i<<" "<<j<<endl;
    
    return 0;
}

