#include <iostream>

using namespace std;

/* INLINE KEYWORD
 * --------------
 * The inline keyword tells the compiler to substitute the code within the
 * function definition for every instance of a function call.
 *
 * Using inline functions can make your program faster because they eliminate
 * the overhead associated with function calls. The compiler can optimize
 * functions expanded inline in ways that aren't available to normal
 * functions.
 *
 * Inline functions are only suggestions, not compulsions.
 */

int fibonacci(int n) {
  if (n <= 1)
    return n;
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the positon:" << endl;
  cin >> n;

  cout << "The " << n << " number in the fibonacci series is: " << fibonacci(n)
       << endl;

  return 0;
}
