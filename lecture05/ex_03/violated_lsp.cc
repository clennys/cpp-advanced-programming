#include <iostream>

using namespace std;

class shape {
public:
  virtual int area() = 0;
};

class rectangle : public shape {
protected:
  int width;
  int height;

public:
  rectangle(int w, int h) : width(w), height(h) {}
  void setHeight(int h) { height = h; }
  void setwidth(int w) { width = w; }
  int area() { return height * height; }
};

class square : public rectangle {
private:
public:
  // square(int s) : width(s), height(s) {} // not possible due to
  // initialization order of c++
  square(int s) : rectangle(s, s) {}
  int area() { return height * height; }
};

int main(int argc, char *argv[]) {
  rectangle rec = rectangle(10, 11);
  square sq = square(5);
  cout << "Area of the rectangle: " << rec.area() << endl;
  cout << "Area of the square: " << sq.area() << endl;

  return 0;
}
