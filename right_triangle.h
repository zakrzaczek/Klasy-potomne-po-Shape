#include "shape.hpp"
#include <iostream>
using namespace std;

class RTriangle : public Shape {
public:
    void Fill();
    void Alloc();
    void Print();

    using Shape::Shape;
    RTriangle(int h, char s, string c);

};