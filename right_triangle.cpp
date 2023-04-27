#include "right_triangle.h"
#include <iostream>
using namespace std;

void RTriangle::Fill() {
    int i, j;

    for (j = 0; j < height; j++)
        for (i = 0; i <= j; i++)
            tab[j][i] = 1;
};

void RTriangle::Alloc() {
    int i, j;

    tab = new int* [height];
    for (j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}

void RTriangle::Print() {
    int i, j;

    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            if (tab[j][i]) {
                cout << color << znak;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\033[0m" << endl;
}

RTriangle::RTriangle(int h, char s, string c) : Shape(h, s, c) {
    cout << "Konstruktor Right Triangle" << endl;
    width = h;
    Alloc();
    Fill();
};