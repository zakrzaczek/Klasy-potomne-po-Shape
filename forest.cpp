#include "forest.hpp"
#include <cassert>


Forest::Forest(int h, int w) {
  H = h;
  W = w;
  tab = new int *[H];
  for (int j = 0; j < H; j++) {
    tab[j] = new int[W];
    for (int i = 0; i < W; i++) {
      tab[j][i] = 0;
    }
  }
}

Forest::~Forest() {
  for (auto t : trees) {
    delete t;
  }
  trees.clear();
  int j;
  for (j = 0; j < H; j++) {
    delete tab[j];
  }
  delete tab;
}

void Forest::AddTree(int h, char s, string c, int y, int x) {
    int i, j;
    Tree* drzewo1 = new Tree(h, s, c);
    drzewo1->x = x;
    drzewo1->y = y;
    trees.push_back(drzewo1);

    for (j = 0; j < drzewo1->height; j++)
        for (i = 0; i < 2 * drzewo1->height - 1; i++)
            if (drzewo1->tab[j][i])
                tab[j + y][i + x] = drzewo1->tab[j][i] * trees.size();
};

void Forest::AddRectangle(int h, int w, char s, string c, int y, int x) {
    int i, j;
    Rectangle* prostokat = new Rectangle(h, w, s, c);
    prostokat->x = x;
    prostokat->y = y;
    rectangles.push_back(prostokat);

    for (j = 0; j < prostokat->height; j++)
        for (i = 0; i < prostokat->height; i++)
            if (prostokat->tab[j][i])
                tab[j + y][i + x] = prostokat->tab[j][i] * rectangles.size();
}

void Forest::AddBorder(int h, int w, char s, string c, int y, int x) {
    int i, j;
    Border* ramka = new Border(h, w, s, c);
    ramka->x = x;
    ramka->y = y;
    borders.push_back(ramka);

    for (j = 0; j < ramka->height; j++)
        for (i = 0; i < ramka->width; i++)
            if (ramka->tab[j][i])
                tab[j + y][i + x] = ramka->tab[j][i] * borders.size();
}

void Forest::AddTriangle(int h, char s, string c, int y, int x) {
    int i, j;
    Triangle* trojkat = new Triangle(h, s, c);
    trojkat->x = x;
    trojkat->y = y;
    triangles.push_back(trojkat);

    for (j = 0; j < trojkat->height; j++)
        for (i = 0; i < 2 * trojkat->height - 1; i++)
            if (trojkat->tab[j][i])
                tab[j + y][i + x] = trojkat->tab[j][i] * triangles.size();
}

void Forest::AddRTriangle(int h, char s, string c, int y, int x) {
    int i, j;
    RTriangle* rtrojkat = new RTriangle(h, s, c);
    rtrojkat->x = x;
    rtrojkat->y = y;
    rtriangles.push_back(rtrojkat);

    for (j = 0; j < rtrojkat->height; j++)
        for (i = 0; i < rtrojkat->width; i++)
            if (rtrojkat->tab[j][i])
                tab[j + y][i + x] = rtrojkat->tab[j][i] * rtriangles.size();
}

void Forest::PrintForest() {
  int i, j;
  for (j = 0; j < H; j++) {
    for (i = 0; i < W; i++) {
      int k = tab[j][i];
      assert(k >= 0 && k <= trees.size());
      if (k) {
        cout << trees[k - 1]->color;
        cout << trees[k - 1]->znak;
      } else
        cout << " ";
    }
    cout << "\033[0m"<<endl;
  }
  //cout << endl << "Liczba drzew: " << Tree::counter << endl;
}