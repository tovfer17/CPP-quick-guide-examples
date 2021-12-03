#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      int val = 500; //notice how val is used here and 
      cout << "Inside first_space" <<val<< endl;
   }
}

// second name space
namespace second_space {
   void func() {
      int val = 200; //here. namespace allows a way to avoid this confusion 
      cout << "Inside second_space" << val<< endl;
   }
}

using namespace first_space;
int main () {
   // Calls function from first name space.
   //first_space::func();
    func(); //other way is to use directive namespace
   // Calls function from second name space.
   //second_space::func(); 

   return 0;
}