#include <iostream>
using namespace std;
#include "shape.h"

//DODA� WSZYSTKIE 4 POZYCJE

class RTriangle : public Shape {
public:
    using Shape::Shape;

    virtual void Fill();

    RTriangle(int h, char s, string c);

};