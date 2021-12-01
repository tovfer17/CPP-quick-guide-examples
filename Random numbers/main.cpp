#include <iostream>
//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int i,j;
    
    //set the seed
    srand((unsigned) time (NULL));
    
    /*genenrate 10 random numners*/
    for (i=0;i<10;i++){
        //generae actual random number
        j=rand();
        cout<<"random number: "<<j<<endl;
    }
    return 0;
}

