#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
#include "tree.hpp"

#include "triangle.h"
#include "right_triangle.h"
#include "border.h"

class Forest {
public:
    int H, W;
    int** tab;

    vector<Tree*> trees;

    vector<Rectangle*> rectangles;
    vector<Border*> borders;
    vector<Triangle*> triangles;
    vector<RTriangle*> rtriangles;

    Forest(int h, int w);
    ~Forest();

    void AddTree(int h, char s, string c, int y, int x); //10, '%', "green", 2, 2
    
    void AddRectangle(int h, int w, char s, string c, int y, int x);
    void AddBorder(int h, int w, char s, string c, int y, int x);
    void AddTriangle(int h, int w, char s, string c, int y, int x);
    void AddRTriangle(int h, int w, char s, string c, int y, int x);

    void PrintForest();

};

