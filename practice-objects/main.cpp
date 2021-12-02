//https://medium.com/@alexander.s.augenstein/how-i-passed-the-c-code-interview-in-3-weeks-a3e350214a01

#include <iostream>
#include <string>
using namespace std; 

#define print(s) cout << s << endl;

class Car {
    public:
        string brand;
        string model;
        int year;

        Car(const char* brand, const char* model, int _year) {
            (*this).brand = brand; // using this
            this->model = model; // using this with arrow operator, same as pointer dereferencing above, looks cleaner
            year = _year; // without this, could have been in an initialization list....
        };
};

int main() {
    Car carObj1("hidy", "ho", 1776);
    print(carObj1.year);
}