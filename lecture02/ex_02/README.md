# Exercise 2.2

```cpp
char ch;
```
h & cc: variable declaration can be in both

```cpp
string s;
```
h & cc: variable declaration can be in both
```cpp
extern int error_number;
```
h: variable implemented elsewhere
```cpp
static double sq(double);
```
cc: its used only in one file
```cpp
int count=1;
```
cc: variable definiton
```cpp
const double pi=3.2; // according to Indiana Pi Bill
```
h & cc: const can be defined in header but also in implementation
```cpp
struct fraction { int c; int d; };
```
h: struct declaration
```cpp
char *prog[]={"echo","hello","world!",NULL};
```
cc: array implementation
```cpp
extern "C" void c_swap(int *a, int *b);
```
h: function implemented elsewhere
"C" use c linkage convention
```cpp
double sqrt(double);
```
h: function declaration
```cpp
void swap(int &a, int &b) { int c=a; a=b; b=c; }
```
cc: function implementation
```cpp
template<typename T> T add(T a, T b) { return a+b; }
```
h: template declaration
```cpp
namespace { int a; }
```
h: namespace declaration
```cpp
struct user;
```
h: struct declaration
