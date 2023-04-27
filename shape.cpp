#include <iostream>

using namespace std;

#include "shape.hpp"


Shape::Shape(int h, char z, string c) {
  int j, i;
  height = h;
  znak = z;
  color = c;

  if (c == "red")       color = "\033[1;31m";
  if (c == "yellow")    color = "\033[1;33m";
  if (c == "green")     color = "\033[1;32m";
  if (c == "blue")      color = "\033[1;34m";
  if (c == "cyan")      color = "\033[1;36m";
  if (c == "purple")    color = "\033[1;95m";

  counter++;

  cout<< "Konstruktor Shape"<< endl;
}

Shape::~Shape() {
    int j;
    for (j = 0; j < height; j++) {
        delete tab[j];
    }
    delete tab;
    counter--;
    cout << endl << "Kasuje Shape: zostalo " << counter << endl;
}

//void Shape::Print() {
//    int i, j;
//
//    for (j = 0; j < height; j++) {
//        for (i = 0; i < width; i++) {
//            if (tab[j][i]) {
//                cout << color << znak;
//            }
//            else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    cout << "\033[0m" << endl;
//}

/* to bedzie robila funckja Alloc
void Shape::Alloc() {
  int i, j;
  if (shape == "triangle") {
      tab = new int* [height];
      for (j = 0; j < height; j++) {
          tab[j] = new int[2 * height - 1];
          for (i = 0; i < 2 * height - 1; i++)
              tab[j][i] = 0;
      }
  }
  else {
      tab = new int* [height];
      for (j = 0; j < height; j++) {
          tab[j] = new int[width];
          for (i = 0; i < width; i++)
              tab[j][i] = 0;
      }
  }
}
*/

/*for (j = 0; j < height; j++) {
  for (i = height - j - 1; i < height + j; i++) {
    tab[j][i] = 1;
  }
}*/ //to bedzie robila funkcja Fill
