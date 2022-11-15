#ifndef RANGE_H_
#define RANGE_H_

class riter {
private:
  int val;

public:
  riter(int c);
  int operator*() const;
  bool operator!=(const riter &iter) const;
  riter &operator++();
};

class range {
private:
  const int range_start;
  const int range_end;

public:
  range(int s, int e);
  riter begin();
  riter end();
};

#endif // !RANGE_H_
