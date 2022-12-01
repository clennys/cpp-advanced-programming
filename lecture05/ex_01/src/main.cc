#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>

using namespace std;

#include "../include/merger.h"

void print_vector(vector<int> vec) {
  for (unsigned int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
}

int main() {
  vector<int> v = {1, 2, 3};
  set<int> s = {4, 5, 6};
  vector<int> v_merge = merger<vector<int>, set<int>>(v, s);

  cout << "Merge Vector:  " << endl;
  print(v);
  cout << "With Set:  " << endl;
  print(s);
  cout << "To vector: ";
  print(v_merge);
  cout << endl;

  // map<int, int> m = {{1, 1}, {2, 2}, {3, 3}};
  // map<int, int> m0 = {{4, 4}, {5, 5}, {6, 6}};
  // map<int, int> m_merge = merger<map<int, int>, map<int, int>>(m, m0);
  // cout << "Merge Map:  " << endl;
  // print(m);
  // cout << "With Map:  " << endl;
  // print(m0);
  // cout << "To Map: ";
  // print(m_merge);
  // cout << endl;
  //
  // forward_list<int> fl = {1, 2, 3};
  // list<int> l = {4, 5, 6};
  // forward_list<int> fl_merge = merger<forward_list<int>, list<int>>(fl, l);
  //
  // cout << "Merge forward list:  " << endl;
  // print(fl);
  // cout << "With list:  " << endl;
  // print(l);
  // cout << "To a forward list: ";
  // print(fl_merge);
  // cout << endl;

  return 0;
}
