#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

#define SIZE 1000000

using namespace std;
using std::chrono::duration;
using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;

template <typename T, typename U> bool finder(U collection, T match) {
  auto iter = find_if(collection.begin(), collection.end(),
                      [match](T i) -> bool { return i == match; });
  return iter != collection.end();
}

template <typename T> void writevector(vector<T> v, string file) {
  ofstream ofs(file);
  for (const T &elem : v)
    ofs << elem << endl;
}

template <typename T> vector<T> readvector(string file) {
  ifstream ifs(file);
  vector<T> v;
  for (;;) {
    T x;
    ifs >> x;
    if (!ifs.good())
      break;
    v.push_back(x);
  }
  return v;
}

string random_string() {
  string str("123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  random_device rd;
  mt19937 generator(rd());
  shuffle(str.begin(), str.end(), generator);
  return str.substr(0, 32); // assumes 32 < number of characters in str
}

double duration_seconds_double(high_resolution_clock::time_point t1,
                               high_resolution_clock::time_point t2) {
  duration<double, std::milli> ms_double = t2 - t1;
  return ms_double.count() * 0.001;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "Check arguments!" << endl;
    exit(1);
  }
  string type(argv[1]);

  double time = 0.0;
  bool found = false;
  if (type == "int") {
    cout << "Populate vector with " << SIZE << " elements..." << endl;
    vector<int> collection_int = readvector<int>("int.txt");
    // for (int i = 0; i < SIZE; ++i) {
    //   collection_int.push_back(i + 1);
    // }
    // collection_int.push_back(0);
    // writevector(collection_int, "int.txt");

    cout << "Find match..." << endl;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    found = finder<int>(collection_int, 0);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    time = duration_seconds_double(t1, t2);

  } else if (type == "string") {
    cout << "Populate vector with " << SIZE << " elements." << endl;
    vector<string> collection_string = readvector<string>("string.txt");
    // for (int i = 0; i < SIZE; ++i) {
    //   collection_string.push_back(random_string());
    // }
    // collection_string.push_back("0");
    // writevector(collection_string, "string.txt");

    cout << "Find match..." << endl;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    found = finder<string>(collection_string, "0");
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    time = duration_seconds_double(t1, t2);
  }
  if (found) {
    cout << "Element was found in " << time << "s." << endl;
  } else {
    cout << "Element was not found in " << time << "s." << endl;
  }
}
