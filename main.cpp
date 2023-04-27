#include <iostream>
#include <vector>

using namespace std;

#include "forest.hpp"


int Tree::counter = 0;
int Shape::counter = 0;

int main() {
  int i, j;
  
  /*cout << "\033[0;36m To jest zwykly tekst cyan \033[0m" << endl;
  cout<< "\033[4;34m To jest podkreslony tekst blue \033[0m"<<endl;
  cout<< "\033[7;33m To jest inverse tekst yellow \033[0m"<<endl;

   Tree drzewko(10, '%', "green");
   drzewko.printTree();

   cout << endl;

  for (j = 0; j < height; j++) {
    for (i = 0; i < 2 * height - 1; i++)
      cout << tab[j][i];
    cout << endl;
  }

   las
   int i, j;

   Forest las(15, 60);
   las.AddTree(5, '%', "green", 2, 2);
   las.AddTree(7, '@', "red", 3, 15);
   las.AddTree(8, '*', "blue", 6, 16);

   for (j = 0; i < las.H; j++) {
     for (i = 0; j < las.W; i++) {
       cout << las.tab[j][i];
     }
     cout << endl;
   }
   las.PrintForest();

  Rectangle p;*/

  RTriangle rt(2, '\\', "red");
  Triangle t(5, '^', "green");
  Rectangle r(9, 7, '#', "yellow");
  Border b(5, 10, '|', "cyan");
  
  rt.Print();
  t.Print();
  r.Print();
  b.Print();

  return 0;
}