#include "../include/range.h"

riter::riter(int c) : val(c) { /* void */
}

bool riter::operator!=(const riter &iter) const { return iter.val != val; }

riter &riter::operator++() {
  ++val;
  return *this;
}

int riter::operator*() const { return val; }

range::range(int s, int e) : range_start(s), range_end(e) { /* void */
}

riter range::begin() { return riter(range_start); }
riter range::end() { return riter(range_end + 1); }
