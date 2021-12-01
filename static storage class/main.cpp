//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm
#include <iostream>

//function declaration

void func(void);

static int count=10; /*global variable*/

int  main()
{
    while(count--){
        func();
    }
    return 0;
}
//function definition
void func (void){
    static int i=5; //local static variable
    i++;
    std::cout<< " i is "<<i;
    std::cout<< " and count is "<<count<<std::endl;
}

