#include <iostream>

using namespace std;
class shape {
public:
  virtual int area() = 0;
};

class square : public shape {
protected:
  int height;

public:
  void setHeight(int h) { height = h; }
  int area() { return height * height; }
};

class rectangle : public square {
private:
  int width;

public:
  void setwidth(int w) { width = w; }
  int area() { return height * width; }
};

int main(int argc, char *argv[]) {
  rectangle rec = rectangle();
  rec.setHeight(10);
  rec.setwidth(25);

  square square;
  square.setHeight(5);

  cout << "Area of the rectangle: " << rec.area() << endl;
  cout << "Area of the square: " << square.area() << endl;

  return 0;
}
