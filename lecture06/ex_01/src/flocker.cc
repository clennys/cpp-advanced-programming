#include "../include/flocker.h"
#include <iostream>
#include <sys/file.h>

using namespace std;

flocker::flocker(string fname) : file(fname) {
  const char *path = fname.c_str();
  fd = open(path, O_WRONLY | O_CREAT);
  lock();
}

void flocker::lock() {
  cout << "Locking file ... " << endl;
  flock(fd, LOCK_EX);
}

void flocker::unlock() {
  cout << "Unlocking file ... " << endl;
  flock(fd, LOCK_UN);
}

string flocker::get_file_name() { return file; }

flocker::~flocker() { unlock(); }
