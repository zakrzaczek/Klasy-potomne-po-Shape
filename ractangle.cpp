#include "rectangle.hpp"
#include <iostream>
using namespace std;

void Rectangle::Fill(){
  int i, j;

  for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++)
      tab[j][i] = 1;
  }

};

void Rectangle::Alloc() {
    int i, j;

    tab = new int* [height];
    for (j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}


void Rectangle::Print() {
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

Rectangle::Rectangle(int h, int w, char s, string c) : Shape(h, s, c){
  cout<< "Konstruktor Rectangle"<< endl;
  width = w;
  Alloc();
  Fill();
}

Rectangle::Rectangle(int h, char s, string c) : Shape(h, s, c){
  cout<< "Konstruktor Square"<< endl;
  width = h;
  Alloc();
  Fill();
}