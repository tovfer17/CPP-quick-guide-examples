#include <iostream>
using namespace std;

template <typename T>
T square (T x) {
    return x*x;
}

int main() {
    cout << (5<4 ? "T" : "F") << endl;
    cout << square(5.5) << endl;
}