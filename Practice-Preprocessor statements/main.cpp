#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;

int main()
{
    //char* buffer = new char[8];
    int a = 5;
    void* ptr = &a;
    LOG(*(int*)ptr);
    //delete[] buffer;
}