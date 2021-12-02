#include <iostream>
using namespace std;
#define print(s) cout << s << endl;

int increment0(int value) {
    value++;
    return value;
}

void increment1(int& value) {
    value++;
}

void increment2(int* value) {
    (*value)++;
}

int main() {
    
    int a = 5;
    print(a);
    a = increment0(a); // pass by value
    print(a);
    increment1(a); // pass by reference
    print(a);
    int* b = &a;
    increment2(b); // pass by reference using pointers
    print(a);

    return 0;
}
