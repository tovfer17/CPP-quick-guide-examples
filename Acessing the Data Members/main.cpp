//https://www.tutorialspoint.com/cplusplus/cpp_quick_guide.htm

#include <iostream>

using namespace std;

class Box{
    public:
        double length; //length of box
        double breadth; //breadth of box
        double height; //height of  a box

};

int main(){
    Box Box1;//declare box1 of type box
    Box Box2; //declare box2 of type box
    double volume =0.0; //store the volume of the  box here

    //box1 specification
    Box1.height=5.0;
    Box1.length=6.0;
    Box1.breadth=7.0;

    //box2 specification
    Box2.height=10.0;
    Box2.length=12.0;
    Box2.breadth=13.0;

    //volume of box1
    volume= Box1.height*Box1.length*Box1.breadth;
    cout<<"Volume of Box1: "<<volume<<endl;

    //volume of box2
    volume= Box2.height*Box2.length*Box2.breadth;
    cout<<"Volume of Box2: "<<volume<<endl;

    return 0;

}