# Squares and Rectangles

**Would you derive a rectangle from a square or vice-versa?**

### Liskov substitution principle
> If S is a subtype of T, then objects of type T in a program may be replaced with objects of type S without altering any of the desirable properties of that program

The Liskov Substitution Principle states that any class that is the child of a parent class should be usable in place of its parent without any unexpected behaviour.

### Solution

In mathematics, a Square is a Rectangle. Indeed it is a specialization of a rectangle. The "is a" makes you want to model this with inheritance. However if in code you made Square derive from Rectangle, then a Square should be usable anywhere you expect a Rectangle. This makes for some strange behavior.

Imagine you had SetWidth and SetHeight methods on your Rectangle base class; this seems perfectly logical. However if your Rectangle reference pointed to a Square, then SetWidth and SetHeight doesn't make sense because setting one would change the other to match it. In this case Square fails the Liskov Substitution Test with Rectangle and the abstraction of having Square inherit from Rectangle is a bad one.

#### LSP maintained Rectangle inherits from Squares

```cpp
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
```

#### Violated LSP Square inherits from Rectangle
```cpp
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
```
