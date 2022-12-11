#ifndef FLOCKER_H_
#define FLOCKER_H_

#include <string>

using namespace std;

class flocker {
private:
  string file;
  int fd;

  void lock();
  void unlock();

public:
  flocker(string fname);
  ~flocker();
  string get_file_name();
};

#endif // !FLOCKER_H_
