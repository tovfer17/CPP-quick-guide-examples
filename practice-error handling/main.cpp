#include <iostream>
#include <string>

using namespace std; 


int main () {
    try {
        string my_str = "Yikes";
        throw my_str;
    }
    catch (string e) {
      cout<< "Int exception thrown "<< e <<endl;
    }
}