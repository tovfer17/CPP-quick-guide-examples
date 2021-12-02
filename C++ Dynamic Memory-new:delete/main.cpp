#include <iostream>
using namespace std;

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
   if( !(pvalue  = new double )) {  //good practice to check if new operator is retruning erNULL point
   cout << "Error: out of memory." <<endl;
   exit(1);
}
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.

   return 0;
}