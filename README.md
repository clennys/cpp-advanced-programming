# Advanced Programming in C++

## Exercises

| Exercise   | Topic	    |
| ----------- | ----------- |
| ![L1.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture01/ex_01) | Hello World and Text file converter |
| ![L1.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture01/ex_02)| Fraction type |
| ![L1.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture01/ex_03)| Simple Spell Checker |
| ![L1.4](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture01/ex_04)| RPN (Reverse Polish Notation Calculator) |
| ![L1.5](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture01/ex_05)| Inline functions |
| ![L2.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture02/ex_01)| Persistent vector |
| ![L2.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture02/ex_02)| header or implementation file |
| ![L2.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture02/ex_03)| Template-based RPN |
| ![L2.4](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture02/ex_04)| Connect four |
| ![L2.5](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture02/ex_05)| reference vs pointer under the hood  |
| ![L3.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture03/ex_01)| Emulating pointers  |
| ![L3.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture03/ex_02)| Persister trait and Persistent set  |
| ![L3.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture03/ex_03)| RPN<complex>  |
| ![L3.4](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture03/ex_04)| upgraded spell checker  |
| ![L3.5 + L4.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture03/ex_05)| Connect four with minimax |
| ![L4.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture04/ex_02)| find_if in C++ and Java |
| ![L4.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture04/ex_03)| Implement a range(10,20) class |
| ![L4.4](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture04/ex_04)| Merge STL Containers |
| ![L4.5](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture04/ex_05)| Iterator lies between iterators |
| ![L5.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture05/ex_01)| Reimplement your merge function with std::merge and std::back_inserter |
| ![L5.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture05/ex_02)| Spell Checker with Regular Expressions |
| ![L5.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture05/ex_03)| Squares and Rectangles (LSP) |
| ![L5.4 + L5.5](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture05/ex_04%2B05)| Connect 4 with Inheritance and Factory for Computer Player |
| ![L5.6](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture05/ex_06)| Inheritance Construction and Destruction |
| ![L6.1](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture06/ex_01)| Locker Class |
| ![L6.2](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture06/ex_02)| Metaprogramming |
| ![L6.3](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture06/ex_03)| Reimplement between with enable_if |
| ![L6.4](https://github.com/devnnys/cpp-advanced-programming/tree/main/lecture06/ex_04)| RPN Calculator with Concepts |

## TOC

<!--toc:start-->
- [Advanced Programming in C++](#advanced-programming-in-c)
  - [Generalities](#generalities)
  - [Lecture 1](#lecture-1)
    - [Classes](#classes)
      - [Sidebar: inline](#sidebar-inline)
      - [Constructor & Destructor](#constructor-destructor)
      - [Access Control](#access-control)
      - [User-defined Operators](#user-defined-operators)
      - [Default Artifacts (classes)](#default-artifacts-classes)
        - [Disable Default Artifacts](#disable-default-artifacts)
      - [Rule of Three](#rule-of-three)
      - [User-defined Conversion Operations](#user-defined-conversion-operations)
      - [C/C++ const (vs. Java final)](#cc-const-vs-java-final)
      - [Namespaces](#namespaces)
    - [Standard Library - Basics](#standard-library-basics)
      - [Input and Output](#input-and-output)
      - [Container](#container)
        - [Complexity Guarantees](#complexity-guarantees)
        - [Iterators](#iterators)
  - [Lecture 2](#lecture-2)
    - [Templates](#templates)
      - [Templates: Specialization](#templates-specialization)
    - [Separate Compilation](#separate-compilation)
      - [Header Files](#header-files)
        - [What goes into header files?](#what-goes-into-header-files)
    - [Memory management](#memory-management)
      - [Typical Memory Layout](#typical-memory-layout)
      - [The Stack](#the-stack)
      - [Pointers (TYPE\*)](#pointers-type)
        - [Pointer Operations](#pointer-operations)
      - [References (TYPE&)](#references-type)
      - [Commonly Used (Safe) Patterns](#commonly-used-safe-patterns)
      - [Arrays](#arrays)
      - [The Heap](#the-heap)
        - [Memory (De)Allocation](#memory-deallocation)
        - [Memory Management with Pointer Wrappers](#memory-management-with-pointer-wrappers)
  - [Lecture 3](#lecture-3)
    - [Templates II: Traits](#templates-ii-traits)
      - [Specialization](#specialization)
        - [Sidebar: Inheritance](#sidebar-inheritance)
      - [Trait Classes](#trait-classes)
      - [Summary Templates II](#summary-templates-ii)
    - [STL: Algorithms, Functors, Design](#stl-algorithms-functors-design)
      - [Designing and (stl) Algorithm](#designing-and-stl-algorithm)
      - [Algorithms `#include <algorithm>`](#algorithms-include-algorithm)
      - [lambda functions (C++11)](#lambda-functions-c11)
      - [Maximum with for_each](#maximum-with-foreach)
        - [f as unary function](#f-as-unary-function)
        - [f as function object](#f-as-function-object)
        - [Related: Range For (for_each) [C++11]](#related-range-for-foreach-c11)
      - [Algorithms: transform](#algorithms-transform)
  - [Lecture 4](#lecture-4)
    - [Templates III](#templates-iii)
      - [Templates: implementation](#templates-implementation)
      - [Templates: Static Algorithm Selection](#templates-static-algorithm-selection)
    - [Memory Management: Rule of 3/5](#memory-management-rule-of-35)
      - [Running Sample: own String implementation](#running-sample-own-string-implementation)
      - [Memory analyzer: Valgring / Electric Fence / DUMA](#memory-analyzer-valgring-electric-fence-duma)
      - [Rvalue References](#rvalue-references)
      - [Copy and Swap Idiom](#copy-and-swap-idiom)
      - [Summary Memory Management](#summary-memory-management)
      - [Sidebar: Reference Counting and std::string](#sidebar-reference-counting-and-stdstring)
  - [Lecture 5](#lecture-5)
    - [Regular Expressions](#regular-expressions)
    - [Inheritance](#inheritance)
      - [Types of Inheritance](#types-of-inheritance)
        - [`public`](#public)
        - [`proteted, private`](#proteted-private)
      - [Code and Type Inheritance](#code-and-type-inheritance)
      - [Overriding Members](#overriding-members)
      - [Binding](#binding)
        - [Static vs. Dynamic Binding](#static-vs-dynamic-binding)
        - [Dynamic Binding](#dynamic-binding)
      - [Abstract Classes (and Interfaces)](#abstract-classes-and-interfaces)
      - [Virtual Destructor](#virtual-destructor)
      - [Multiple Inheritance](#multiple-inheritance)
        - [Diamond Shape Inheritance](#diamond-shape-inheritance)
      - [Slicing](#slicing)
      - [Casts](#casts)
        - [`static_cast<T>(o)`](#staticcastto)
        - [`dynamic_cast<T>(o)`](#dynamiccastto)
        - [`reinterpret_cast<T>(o)`](#reinterpretcastto)
  - [Lecture 6](#lecture-6)
    - [Exceptions](#exceptions)
      - [Exception Discrimination](#exception-discrimination)
      - [cleaing up in C++11](#cleaing-up-in-c11)
      - [Exception Specification](#exception-specification)
    - [Liskov Substitution Principle](#liskov-substitution-principle)
    - [C++ Metaprogramming](#c-metaprogramming)
<!--toc:end-->

## Generalities

- C++ allows use of different Programming paradigms:
  - Procedural programming
  - Object-based programming (templates, static polymorphism)
  - Object-oriented programming (inheritance, dynamic polymorphism)
- Features of special interest
  - strong vs weak typing
  - static vs dynamic typing
  - templates
  - Standard Library (STL)
  - Exception Handling

## Lecture 1

### Classes

- Encapsulation
	- Adds structure to the program
	- Gives class an explicit interface (access checked by compiler)
	- User only needs to know this interface
	- Hides implementation details
- Abstract data types
	- Stack, vector, map etc
- User defined types
	- Allows developers to develop types that mimic primitive types.

_"Decide which Types you want; provide a full set of operations for each type"_ - Bjarne Stroustrup

- OO can be simulated in C, by e.g. passing the struct or record to the function call as the first argument
- C++ can use default parameters in instantiations

```cpp
fraction(int cntr = 0, int denom = 1);
```
- When the compiler compiles our class, it...
	- Converts member functions to individual functions, and
	- Adds the implicit `this` parameter to each function
- Defintion of members outside class def.: `classname::`
- Just using member functions adds no overhead!

#### Sidebar: inline

- Replaces function call with function's body
- Goes into the header
- Useful for smaller functions
- Only a hint for the compiler, may decide against it
- Compiler can only inline function if its implementation is visible, which is why inline func. go into header

#### Constructor & Destructor

- executed after memory allocation for object
- ':' section initializes members by skipping default construction
- since C++11 other constructors from the same class
- executed before memory get's deallocated
- allows you to free additional resources (later)

```cpp
class C { //a C11 class with a target constructor
  int s;
  T t;  //has a conversion operator to double

 public:
  //the target constructor
  C(int i, T& t1): s(i), t(t1) {/*more common init code*/}

  //three delegating ctors that call the target ctor
  C(): C(12, 4.5) {/*specific post-init code*/}
  C(int i): C(i, 4.5) {/*specific post-init code*/}
  C(T& t1): C(12, t1) {/*specific post-init code*/}
  //destructor
  ~C(void) {//some code}
};
```

#### Access Control

- `public:` may be used by anybody
- `private:` may only be used by the class
- `protected:` may be used by class and subclass
- `friend ...` allow artifact acces to internals of class (compared to package in Java)
  The friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears.

```cpp
class fraction {
  friend int read(fraction &f);
  ...
};
//or close relationship classes
class matrix {
  friend class vector
  ...
};
```
- Members of `struct` public by default
- Members of `class` private by default

#### User-defined Operators

- Basically all operators may be overloaded
- Must adhere to mathematical properties though
- Reflexivity `foo==foo`
- Symmetry `foo==bar <=> bar==foo`
- Transitivity `foo==bar & bar==foobar ==> foo==foobar`
- Associativity and Commutativity `foo+=bar <=> foo=foo+bar` & `foo!=bar <=> !(foo==bar)`

#### Default Artifacts (classes)

- Created by compiler if not defined
- Default constructor `T(void)`
- Copy constructor `T(const T&)`
	- Copies each attribute with copy constructor (potentially, a “shallow copy“)
- Assigment operator `operator=(T)`
	- Copies each attribute with operator= (potentially, a “shallow copy”)
- Destructor does nothing

##### Disable Default Artifacts

- For access of other classes, hide the def. constructor
- If it shouldn't be created at all:
  - Since C++11 mark with `= delete`
  - Prior: declare but don't implement

#### Rule of Three

- If either implemented (copy con. assignment. op or destructor), implement all 3 (even if not needed, just use same code the compiler would have created)

#### User-defined Conversion Operations

- allows users to define implicit conversion functions
- Stylewyse one should use `static_cast<T>(x)` instead of `(T) x`
- operator can be declared e.g. in class as

```cpp
operator double() { return (double a/b)} //return something}
```

#### C/C++ const (vs. Java final)

- C/C++ const specifies that given variable/object the pointing variable is **constant**
- in Java final only specifies that value cannot be changed
- C/C++ distinguished wheter **pointer** is const or the **structure** pointed to

```cpp
int size() const; // promises not to change variables from inside out
const vector<string> v2; // object cannot be modified
const vector<string> *vp = &v2; // pointer is not constant, only the object type pointed to
vector<string> *const vq = &v2; // pointer is a constant, object it's pointing to isn't
const vector<string> *const vq = &v2; // pointer is a constant, object it's pointing to is as well
```

#### Namespaces

- Modular Programming, avoid name collisions and for user defines data-types

```cpp
namespace { ... } // may be anonymous
/* anonymous or unnamed namespaces can be used to make variables
 * and functions usable in the same file, avoiding collisions and
 * making them global static
 */
namespace utils {
  namespace fractions { ... }
} // nested namespaces
namespace utils::fractions { ... } // C++17 supports nested ns w/ ::
using NAMESPACE::VAR; // to import single statements
using namespace NAMESPACE; // to import whole namespace
```

- operators can be defined in multiple ways and scopes

```cpp
fraction fraction::operator+(complex b); // member function
fraction operator+(fraction a, complex b); // stand-alone
```

- which one will be used by the compiler?
  - use member operator, if multiple member operators, use overloading rules
  - is there operator+(a,b,) defined in their namespaces of classes of objects a and b? if yes, use it, if multiple use standard overloading rules

### Standard Library - Basics

#### Input and Output

```cpp
cout // standard output
operator<< // write output to a stream
cin // standard input
operator>> // read input from a stream
fstream // file stream
sstream // string stream
```

- Stream states
  - good: all is fine
  - fail: last operation failed
  - bad: characters may have been lost
  - eof: reached end-of-file
- operator>> by default skips whitespaces, use istream::get() to read each character

#### Container

- different data structures
- abstraction of a memory area
- user-defined allocator
- can be accessed using iterators

- Sequence Containers
  - `vector<T>, list<T>, forward_list<T>, deque<T>`
- Asscociative Containers
  - `map<K,V>, multimap<K,V>` using trees
  - `set<K>, multiset<K>` using trees
  - `unordered_map<K,V>, unordered_multimap<K,V>` using hash
  - `unordered_set<K>, unordered_multiset<K>` using hash
- Sequence Container Adapters
  - `stack<T,C>`
  - `queue<T,C>, priority_queue<T,C>`

##### Complexity Guarantees

![Complexity Guarantees](/media/compguar.png?raw=true)

##### Iterators

```cpp
vector<string>::iterator fst = playlist.begin();
// since C++11 also:
auto fst = being();
```

![Iterator Types](/media/itertypes.png?raw=true)

## Lecture 2

### Templates

Types of polymorphism

- "Ad-hoc"
  - overloading
  - statically resolved by compiler
- Dynamic
  - using `virtual` member functions
  - Method to be invoked identified during run-time (using virtual method table)
- Static or Parametric
  - using templates
  - Function to be invoked can be identified statically
  - Concrete Functions/Classes are generated for the individual parameter types

Declaration and Definition

```cpp
template<typename /* or class */ T>
T min(T a, T b) {
  return a < b ? a : b;
}
void f() { // specifying type of parameter
  min<double>(2.718282, 1.0);
  min<char>('a', 'z');
  min<int>(1, 26);
  min<double>(pi, 2.718282);
  min<int>('a', 26);
  min<double>(2.718282, 1);
}
void f2() { // deduction: type of parameter
  min(2.718282, 1.0);
  min('a', 'z');
  min(1, 26);
  min(pi, 2.718282);
  // min('a', 26); ambiguous
  // min(2.718282, 1); ambiguous
}
// resolving ambiguities
// explicit and necessary
min<int>('a', 26);
// or even if unnecessary
min<const double>(pi, 2.718282);
```

- types used with this template have to provide the routines used by the template -> in this case comparison operator and copy constructor
- checked and resolved statically (during compile-time)
- definition must be available to compiler
- when invoking templates the parameter of the type can be specified, but the compiler is also able to deduce unambiguous cases
- Templates and non-templates can be mixen (with care)
- e.g. min function template and non-template based -> non-template will be preferred if no type conversion is needed

#### Templates: Specialization

- e.g. for C-style strings

```cpp
template<typename T>
T min(T a, T b) {
  return a<b ? a : b;
}

template<>
char *min<char *>(char *a, char *b) {
  return strcmp(a, b)<0 ? a : b;
}

template<>
const char *min<const char *>(const char *a, const char *b) {
  return strcmp(a, b)<0 ? a : b;
}
-------------------------------------------------------------
#include "min.h"
void foo(char *x, char *y, const char *z) {
cout << min(x, y) << endl;  // yes
cout << min(x, z) << endl;  // compiler error; there is no implicit parameter
                            // conversions for templates.
cout << min<const char*>(x, z) << endl; // yes
```

- before C++17 no template parameter deduction for constructors

```cpp
pair<int, bool>(1, false);
// helper function s.a.
make_pair(1, false);
// since C++17
pair(1, false);
```

### Separate Compilation

Why?

- one source file is unrealistic
- break up code into logical structure
- reduction of compile time (only changed parts recompiled)

How?

- multiple source files
- compiler needs to know about
  - Functions and variables provided by other compilation units
  - their signatures and types

In C++

- each source file into an object .o
- object files provide 'minimum' to execute code
- not enough info for the compiler to identify
  - functions provided by other compilation unit
  - Layout of user-defined type
- uses header files to store interfaces

#### Header Files

- another encapsulation mechanism
  - describe interface provided by object files
  - and what should be exported to other compilation units

##### What goes into header files?

- "everything" to be exported and or used in other files
  - **Variables**:
    - Declaration into header, **mark as `extern`**
    - Defintion into implementation file
  - **Constant Variables**
    - Declaration into header, if needed to be used elsewhere
    - Definition either into header (may be allocated multiple times, beware!) or into implementation file

```cpp
// vars.h
#ifndef VARS_H_
#define VARS_H_

extern int my_dumb_global_variable; // no memory allocated
const double pi = 3.141596;
extern const int[] primes;

#endif

// vars.cc
#include "vars.h"

int my_dumb_global_variable=17;
const int primes[]={2, 3, 5, ..., 1234567891};
```

- **Functions**
  - Decleration into header, definition into impl. file
- **Inline Functions**
  - If to be inlined in impl. file only, treat like functions
  - If to be inlined globally (typically), decl. and def. into header
  - compiler has to know the impl. to be used instead of func. call

```cpp
// util.h
#ifndef UTIL_H_
#define UTIL_H_

inline void swap(int &a, int &b) { // inline functions decl. in the header
  int c=a; a=b; b=c;
}
extern int gcf(int a, int b); // extern decl. for functions is optional.
inline int lcm(int a, int b) {
  return (a/gcf(a,b))*b;
}
#endif

// util.cc
#include "util.h"

int gcf(int a, int b) {
  if (a<b) swap(a,b);
  while (b!=0) {
    a=a-b;
    if (a<b) swap(a,b);
  }
  return a;
}
```

- **Types**
  - Type declaration and definitions into header, layout needs to be known
  - for member functions same rules as for functions

```cpp
// fraction.h
class fraction {
  int c; int d;
 public:
  fraction(int cntr=0, int denom=1) : c(cntr), d(denom) { /*void*/ }
  fraction operator*(const fraction &b);
  fraction operator/(fraction b) { // small implicit inline function
    swap(b.c, b.d);
    return (*this)*b;
  }
};

// fraction.cc
#include "fraction.h"
#include "util.h"
fraction::fraction operator*(const fraction &b) {
  fraction r;
  int f1=gcf(this->c,b.d), f2=gcf(b.c,this->d);
  r.c=(this->c/f1)*(b.c/f2);
  r.d=(this->d/f2)*(b.d/f1);
  return r;
}
```

- **Templates**
  - Decl. and Def. into header
  - code is only generated when parametrized -> may look like code but they are only definitions, from which code can be generated
  - if template is only parametrized with small set of types:
    - can treat template functions and template classes like normal functions and classes
    - need to instantiate the class in an impl. file that has access to full templ. def. `template class pvector<string>;`
- "nothing" that causes compiler to immediately generate code
- except for small number of things
- to prevent multiple inclusions:

```cpp
// either use
#ifndef VARS_H_
#define VARS_H_
#endif

// or use, although non-standard, still widely used
#pragma once
/* code */
```

### Memory management

- Built-in types and objects can be stored on stack and heap
- Stack memory managed automatically
- Heap memory needs to be allocated and freed explicitly
- in C++ all parameters can be passed by value, pointer or reference

#### Typical Memory Layout

![a typical memory layout](/media/memlayout.png?raw=true)

#### The Stack

- stores local variables, return addresses etc.

#### Pointers (TYPE\*)

- should be used sparsely and carefully
- since it can point to different types use -> TYPE\*

##### Pointer Operations

- &-Operator:
  - obtains address where value is tored (lvalue)
  - returns a pointer to the type of lvale
  - `&(lvalue)`
- \*-Operator:
  - Dereference a pointer
  - return the type of the value the pointer points to
  - `*(expr)`

```cpp
void c_swap(int *x, int *y) {
  int z = *x;
  *x = *y;
  *y = z;
}

int a=3, b=5;
c_swap(&a, &b);
```

#### References (TYPE&)

- refers to a value or object stored in memory, another name i.e. alias for a given value or object
- it cannot be changed to refer to a different location
- functions may also return References
- allows the function to be used as lvalue:

```cpp
class fraction {
 public:
  // other functions
  // conversion fraction to double
  operator double() { return (double)c/d; }
  // references as return value
  int &counter() { return c; }
  int &denominator() { return d; }
};

void normalize(fraction &a) {
  int f = gcf(a.counter(), a.denominator());
  a.counter() = a.counter() / f;
  a.denominator() /= f;
  // counter() and denominator() are now used as lvalues
}
```

- same charactereristics as a pointer
  - variable a reference points to should exist as long the reference itself
  - never return a reference to a local variable, unless static
    (but avoid static local variables, they are like global variables)
- References are taken implicitly
  - makes the code nicer to read but easy to overlook
- Google Coding Style suggests avoiding references as return values
  and instead stick to pointers

#### Commonly Used (Safe) Patterns

- Function references elements passed by caller
  - `swap(int &a, int &b)`
    - if a and b are valid in caller scope, they 'must be' valid in callee's scope
    - make sure it is obvious to caller that a and b might be changed
  - `print_vector(const vector<string> &v)`
    - with const we promise not to change v
    - avoids duplication of v
- Function return reference to element passed to it
  - `ostream &operator<<(ostream &os, const T &element)`
    - same arg. as above, we return to caller a reference to an object
- Member function return reference to elem. of its class
  - `int &fraction::counter()`
  - ` T &vector::operator[](size_t index)`
    - this is implicitly passed to member function

#### Arrays

- in C(++) is typically equivalent to a pointer of the first element of an array
- not range checked
- Arrays 'cannot' be returned as the result of a fucntion, but the pointer to the first element can be
- may want to use following alternatives in C++

```cpp
std::array<T, N> // fixed size array of Type T with N elements
std::vector<T> // Dynamically growing 'array' of type T
/* both privde bound checking when accessing with */ at()
/* can be returned as the result of a function */
```

#### The Heap

- stores non-local and non-global data
- needs to be specifically allocated (like new in java)
- When allocating data on the heap, think about its ownership and life-cycle
- Generally whoever allocates it, should deallocate it

##### Memory (De)Allocation

- "no" garbage collection in C(++)
  - memory needs to be allocated `new, new[]` and freed `delete, delete[]`
  - new/delete allocates for one and new[]/delete[] for multiple blocks
  - Allocation and deallocation should happen in the same memory,
    if not possible strive for some kind of symmetry, e.g.
    - have an allocator function and a deallocator function/cleanup routine
    - in C frequently function f alloc. and suster func f' which releases

```cpp
int* new_squares(int n) {
  int *buf=new int[n];
  for (int i=0; i<n; ++i) {
    buf[i]=i*i;
  }
  return buf;
}

void delete_squares(int *buf) {
  delete[] buf;
}

void main() {
  int *buf=squares(10);
  for (int i=0; i<10; ++i) {
    cout << sbuf[i] << endl;
  }
  delete_squares(buf);
}
```

- some may still use `malloc()` (there can be an advante with `realloc`)

##### Memory Management with Pointer Wrappers

- unique_ptr<T>, auto_ptr in C++11
- deletes object pointed to, when ptr is destructed

```cpp
void foo() {
  unique_ptr<int> pi (new int);
  *pi=17;
  cout << "*" << pi.get() << "=" << *pi << endl;

  // transfer ownership; pi will point to NULL
  unique_ptr<int> pj(pi.release());
  *pj=19;
  cout << "*" << pi.get() << endl; // displays 0
  cout << "*" << pj.get() << "=" << *pj << endl;
} // deallocate the integer
```

- depending on context `auto_ptr<T>` should be replaced with `unique_ptr<T>` or `shared_ptr<T>`
- provided by STL:
  - `unique_ptr<T>`
    Delete object pointed to when unique_ptr is destructed
  - `shared_ptr<T>`
    Delete obj. pointed to by shared_ptr when this is the last pointer pointing to the object
  - `weak_ptr<T>`
    useful in combination with shared_ptr if cyclic structures are used, aloows to break up cycles, need to be converted to shared_ptr before obj may be accessed
- don't use as all-round solution
- unique_ptr and shared_ptr can be used to return objects

```cpp
unique_ptr<int[]> make_foo3(int n) {
  unique_ptr p{new int[n]};
  for(int i=0; i<n; ++i) {
    p[i]=i*i;
  }
  return p;
}
// the pointers will destruct the object, when they no longer point to it
void main() {
  auto buf = make_foo3(10);
  for(int i=0; i<10; ++i) {
    cout << buf[i] << endl;
  }
}
```

- frequently a C++ `vector` may work better

```cpp
vector<int> squares(int n) {
  vector<int> res(n); //creates n default ints
  for (int i = 0; i < n; ++i) {
    res[i] = i * i;
  }
  return res;
}
// if de feault ints are a problem
// reserve() does not initialize extra memory
{
  vector<int> res;
  res.reserve(n);
  for (int i = 0; i < n; ++i) {
    res.emplace_back(i*i);
  }
}

void main() {
  vector<int> buf = squares(10);
  for (int i = 0; i < 10; ++i) {
    cout << buf[i] << endl;
  }
}
```

## Lecture 3

### Templates II: Traits

#### Specialization

- templates can be be specialized, allowing us to change implementation of a specific class

```cpp
template<typename T>
class pvector{
  void readVector(); // reads a string up to the next whitespace
  void writeVector(); // writes a string with and without whitespace
};

// Specialization
template<>
class pvector<string> {}; // all methods must be repeated
```

##### Sidebar: Inheritance

- Typically, functions to be overridden in the child are declared virtual
- for inheritance to work as 'expected' we typically use pointers or references

```cpp
struct base {
  virtual void print() const { cout << "base" << endl; }
};

struct child : public base {
  virtual void print() const { cout << "child" << endl; }
};

void test(const base &b) {
  b.print();
}
```

- Therefore we could use inheritance to have pvector work for string
- methods that can stay the same don't have to be repeated anymore
- with name fixed:

```cpp
template<typename T> class pvector : public pvector_base<T> {
  using pvector_base<T>::pvector_base; // inherit constructors
};
template<> class pvector<string> : public pvector_base<string> {
  using pvector_base<string>::pvector_base;
  // TODO: specialize readvector, writevector
};
```

- factor out persistence logic into separate interface

```cpp
template<typename T>
struct pvector_serialize {
  virtual void readvector(string fn, vector<T> &v) = 0;
  virtual void writevector(string fn, const vector<T> &v) = 0;
};

// could still factor out just the read and write function
template<typename T>
struct element_serializer {
  virtual void read(ifstream &i, T &elem) { … };
  virtual void write(ofstream &o, const T &elem) { … };
};

template<typename T> class pvector {
  string filename;
  vector<T> v;
  pvector_serializer<T> *serializer; // pass serializer to pvector

 public:
  pvector(string fname, pvector_serializer<T> *ser)
    : filename(fname), serializer(ser) {
    serializer->readvector(fname, v);
  }
  ~pvector() {
    serializer->writevector(fname, v);
  }
  // other funcs
};
```

#### Trait Classes

- Templates can also be used to provide polymorphism
- Inheritance allows to define an interface to be _provided by subtypes_
  - Subtypes may override members
- Templates allow us to define an interface to be _used (traits)_
  - the traits class is specialized for different types (override members)

```cpp
template<typename T> struct persistence_traits {
  static void read(ifstream &i, T &elem) {…}
  static void write(ofstream &o, const T &elem) {…}
}

// same principle as for min<char*>
template<> struct persistence_traits<string> {
  static void read(ifstream &i, string &elem) {…}
  static void write(ofstream &o, const string &elem) {…}
}

template<typename T>
class pvector {
  void writevector() {
    ofstream ofs(filename);
    vector<T>::iterator fst=v.begin(), lst=v.end();
    while (fst!=lst) persistence_traits<T>::write(ofs, *fst++);
  }
```

Traits are similar to Inheritance except ...

- Inheritance allows us to use different implementations
- similarly allow to specify th use of different implementations, independently of the traits type
- ... excpet all type inference is known, verified and resolved during compile time

- always having to specify the persistence trait is tedious
- C++ allows us to assign default value to template parameters

```cpp
template<typename T, typename P=persistence_traits<T>>
class pvector {
  void writevector() {
    ofstream ofs(filename);
    vector<T>::iterator fst=v.begin(), lst=v.end();
    while (fst != lst) P::write(ofs, *fst++);
  }
};

// as part of beauty contest
template<typename T, typename P=persistence_traits<T> >
class pvector {
  // ...
 public:
  typedef P persister;
  typedef typename vector<T>::iterator iterator;
  // typename helps the compiler identify that the following is a typename
  // ...
  void writevector() {
    ofstream ofs(filename);
    iterator fst=v.begin(), lst=v.end();
    while(fst!=lst) persister::write(ofs,*fst++);
  }
}
```

#### Summary Templates II

Traits allow us to use an aspect of a type in a polymorphic way

- the aspect is implemented by a generic template class
- the aspet's implementation can be overridden for certain types T (with template specialization)
- Since T is known during compile-time, the function to be invoked will also be
  known at compile time
- allows the compiler to inline those functions and to perform more optimizations
  (for instance, if certain parameters are constants)
- the trait class can be used by any other class (template or not)
- using an additional template parameter, we can use different trait classes in out template

### STL: Algorithms, Functors, Design

#### Designing and (stl) Algorithm

- Functions such as find/find_if return iterators to the elements
- Find functions, which is generic:

```cpp
template<typename Iter, typename T>
Iter find(Iter begin, Iter beyond, const T &x) {
  while ((begin!=beyond) && (*begin!=x)) ++begin;
  return begin;
}
```

- now find_if function:

```cpp
template<typename Iter, typename Pred>
Iter find_if(Iter begin, Iter beyond, Pred pred) {
  while (begin!=beyond) {
    if (pred(*begin)) break;
    ++begin;
  }
  return begin;
}
```

- pred my now be a function, a lambda expression or a function object
- before it needed a pointer to a function

#### Algorithms `#include <algorithm>`

- Non mutating
  - for_each, find, adjacent_find, count, mismatch, etc.
  - Attention: for_each has a controversy, whether it really doesn't change its elements
- Mutating
  - copy, swap, transform, replace, fill, unique, etc.
- Sorting
  - sort, nth_element, binary_search, partition, etc.
- Sets
  - includes, set_union, set_intersect, set_difference, etc.

#### lambda functions (C++11)

```cpp
int cnt;
for_each(v.begin(), v.end(), [](int i) -> void { // Return type may be left out.
  cout << i << endl; // ++cnt;
});
```

- [] captures env. that should be visible inside lambda function
  - [&cnt, ...] would pass a reference to local variable cnt
  - [cnt, ...] indicates a value
  - [&] and [=] allow to indicate entire current scope
    - [=] can generate a lot of copies!
- compiler generates a function object for each lambda function
- prior to C++11 a function or function object must be created

#### Maximum with for_each

##### f as unary function

```cpp
int my_max_val;

template <typename T>
void my_max(const T &x) {
  if (x>my_max_val) my_max_val = x;
}

int main(int argc, char *argv[]) {
  // …
  my_max_val = *v1.begin();
  for_each(v1.begin(), v1.end(), my_max);
}
```

##### f as function object

```cpp
template <class T>
struct my_max /* : public unary_function<T, void> // removed in C++17 */ {
  T max;
  my_max(const T& x) : max(x) {}
  void operator() (const T& x) {
    if(x>max) max=x;
  }
}

int main(int argc, char *argv[]) {
  // …
  my_max<T> my_max_obj(*v1.begin());
  cout << for_each(v1.begin(), v1.end(), my_max_obj).max;
}
```

##### Related: Range For (for_each) [C++11]

- easier to use than C++'s standard function

```cpp
void print(const vector<int> &v) {
  for (const auto &i : v) {
    cout << i << endl;
}
```

- the object o returned by the expression after `:` needs to
  - provide an o.begin() and o.end() member that return and interator
  - OR a begin(o) and end(o) function returning an iterator
  - return types of begin and end do not have to match since C++17

```cpp
int *begin(MyVec &mv) { return mv.rep; }
int *end(MyVec &mv) { return mv.rep+mv.repsz; }

MyVec squares({0, 1, 4, 9, 16});
for (int i : squares) { cout << i << endl; }
```

#### Algorithms: transform

```cpp
// unary operator
template <class In, class Out, class Op>
Out transform(In fst, In lst, Out res, Op o);

// example
#include <iostream>
#include <algorithm>
using namespace std;
int square(int x) {
  //define square function
  return x*x;
}
int main(int argc, char **argv) {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int res[10];
  transform(arr, arr+10, res, square);
  for(int i = 0; i<10; i++) {
    cout >> res[i] >> "\n";
  }
}
// example end

// binary operator
template <class In, class In2, class Out, class BinOp>
Out transform(In fst, In lst, In2 fst2, Out res, BinOp o);

// example
#include <iostream>
#include <algorithm>
using namespace std;
int multiply(int x, int y) {
   //define multiplication function
   return x*y;
}
int main(int argc, char **argv) {
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[10] = {54, 21, 32, 65, 58, 74, 21, 84, 20, 35};
  int res[10];
  transform(arr1, arr1+10, arr2, res, multiply);
  for(int i = 0; i<10; i++) {
    cout >> res[i] >> "\n";
  }
}
// example end
```

## Lecture 4

### Templates III

#### Templates: implementation

- C++ creates new artifact for each new use of a template
  - program gets "bigger" because of new implementation of each file
  - typically defined in the header file, otherwise compiler can't find it
  - can be used with Built-in types, but also with non-typenames (e.g.
    functions, int, char, etc.)
  - better optimization since each template instantiation can be optimized for
    corresponding tempalte argument
  - may be specialized for specific data types
  - longer compile time due to higher optimization potential
- the compiler needs the full code to instantiate the template
- Like C macros -> Turing Complete

```cpp
template<typename T> T min(T a, T b) {
  return a < b ? a : b;
}
const double pi=3.141596;
void f() {
  // create implementation for
  min(2.718282, 1.0); // min<double>
  min('a', 'z'); // min<char>
  min(1, 26); // min<int>
  min(pi, 2.718282); // … already created
  min<char>('a', 26); // … already created
  min(2.718282, 1.0); // … already created
}
```

- What if we have multiple source files instantiating the same template?
  - Will the code be generated twiche, once for each object file?
    Yes!
  - Will the executables be double the size when main uses both?
    No!
  - Why? The corresponding code of the template is put into a COMDAT section of
    the object file. The linker only uses the first such section with the same name.

#### Templates: Static Algorithm Selection

- Implement an algorithm that finds the distance between two iterators
- Check different types of iterators

![Iterator types](/media/itertypeshier.png?raw=true)

```cpp
struct input_iterator_tag {};
struct output_iterator_tag {};

struct forward_iterator_tag :
  public input_iterator_tag {};

struct bidirectional_iterator_tag :
  public forward_iterator_tag {};

struct random_access_iterator_tag :
  public bidirectional_iterator_tag {};
```

- Why Iterator Tags?
  - Algorithm selection
  - saves typing overhead
  - simulation of bound genericity
    _Decide which algorithms you want; parameterize
    them so that they work for a variety of suitable
    types and data structures._ Bjarne Stroustrup

```cpp
template <class In> iterator_traits<In>::difference_type
__distance(In first, In last, input_iterator_tag dummy) {
  iterator_traits<In>::difference_type n = 0;
  while(first!=last) {
    ++first; ++n;
  }
  return n;
}

template <class Ran> iterator_traits<Ran>::difference_type
__distance(Ran fst, Ran lst, random_access_iterator_tag dummy) {
  return lst-fst;
}

template <class I> inline
iterator_traits<I>::difference_type distance(I first, I last) {
  typedef typename iterator_traits<I>::iterator_category cat;
  return __distance(first, last, cat()); // cat() being the constructor
}

template <class Iter> struct iterator_traits<Iter> {
  typedef typename Iter::iterator_category iterator_category;
  typedef typename Iter::value_type value_type;
  typedef typename Iter::difference_type difference_type;
  typedef typename Iter::pointer pointer;
  typedef typename Iter::reference reference;
};

template <class T> struct iterator_traits<T*> {
  typedef random_access_iterator_tag iterator_category;
  typedef T value_type;
  typedef ptrdiff_t difference_type;
  typedef T* pointer;
  typedef T& reference;
};
```

- Since C++ 11, various type-support functions are provided
- They can be used in combination with SFINAE (Substitution Failure Is Not An Error)
  - achieve same as tag dispatching
  - more powerful
  - requires more background knowledge
  - easiert to use/maintain once understood

### Memory Management: Rule of 3/5

#### Running Sample: own String implementation

Implement our own String class with the following requirements

- Represent strings without length-limit
- Manage the string’s memory
- Want to be able to concatenate string
- Access a character at a given position x of the string

```cpp
#ifndef STRING_H_
#define STRING_H_
// String class

class String { // type declaration+definition
 private:
  char *strg;
  unsigned int len;
 public:
  String(const char *strg=NULL) {
    if (!strg) {
      this->strg=NULL; len=0;
    } else {
      len=strlen(strg);
      this->strg=(char*)malloc((len+1)*sizeof(char));
      memcpy(this->strg, strg, (len+1)*sizeof(char));
    }
  }
  ~String() { if(strg) free(strg); }

  String(const String &s) : String(s.strg) {
    /*void*/
  }

  String &operator=(const String &s) {
    if (this == &s) return *this; // First check if self assignment!
    if (strg) free(strg); // if object stores a string, release it
    if (!s.strg) {
      len=0;
      this->strg=NULL;
    } else { // only if string to be assigned not NULL allocate mem
      // …
    }
    return *this;
  }
  #ifdef RVALREF
  // if defined with rvalue references
  String(String &&s) {
    strg = s.strg; s.strg = NULL;
    len = s.len; s.len = 0;
  }
  String &operator=(String &&s) {
    if (strg) free(strg);
    strg = s.strg; s.strg = NULL;
    len = s.len; s.len = 0;
  }
  #endif

  String operator+(String b) {
    String r;
    r.len=this->len+b.len;
    r.strg=(char*)malloc((r.len+1)*sizeof(char));
    memcpy(r.strg, this->strg, this->len*sizeof(char));
    memcpy(r.strg+this->len, b.strg, (b.len+1)*sizeof(char));
    return r;
  }

  char &operator[](unsigned int idx) {
    return strg[idx];
  }
};
#endif // String.h
--------------------------------------------------------------------------------

#include <iostream>
#include "String.h"
// What is invoked here at e=a+d?
// String operator+(…);
// potentially copy constructor;
// assignment operator;
int main(int argc, char *argv[]) {
  String a("Hello"), b(" "), c("World"), d("!"), e;
  e=a+d;
  cout << e << endl;
  cout << "e[0]=" << e[0] << endl;
}
```

#### Memory analyzer: Valgring / Electric Fence / DUMA

- Valgrind is still updated
- How does it work:
  - make sure that before and after every allocated block there is an unmapped memory block
  - after memory is freed, unmap the memory block
  - accesses to unmapeed memory trigger a seg fault.
- only use for testing / debugging

#### Rvalue References

- In C++ class instances either located on heap or stack.
- Instances can be passed/returned by pointer, reference and value (requires to be copied)
- Instances can be assigned to other instances, requiring to be copied
- to avoid these copies:
  - Copy elision
  - Return value optimization
  - but both cannot be always used
- Rvalue references allow to further optimize such occurences w/ the help of the
  developer

- result of operator+ may be stored in a temporary rvalue but be deleted after
  assignment
  - such value is an expiring value (xvalue)
  - to capture these values, rvalue references were introduces (T&&)
- instead of copying, it'd be more efficient to steal resources of the temp value
  - move constructor introduced to allow stealing resources from xvalues

#### Copy and Swap Idiom

```cpp
class String {
  public:
  friend void swap(String &s, String &t) {
    using std::swap; // enable Argument Dependent Lookup (ADL)
    swap(s.len, t.len);
    swap(s.strg, t.strg);
  }

  String(const char *strg = NULL) { /* allocate and copy string */ }

  String(const String &s) : String(s.strg) { /*void*/ }

  String(String &&s) : String() { // create empty string
    swap(*this, s); // swap resources into *this
  } // free s; empty string, nothing to free

  ~String() { /* free memory occupied by string */ }

  String &operator=(String s) { // pass s by value, replaces init
    swap(*this, s); // swap resources into *this
    return *this;
  } // free s; our old resources
//…
};
```

- Why implement swap function instead of using std::swap?
- The C++ implementers optimized swap using rvalue references
- using std::swap in the move constructor means trouble

```cpp
template<class T>
void swap(T &x, T &y) {
// std::move converts its argument to an rvalue reference
  auto z(std::move(x));
  x=std::move(y);
  y=std::move(z);
}
```

#### Summary Memory Management

- Rule of Three
  - If a class requires a user-defined destructor, a user-defined copy constructor
    or a user-defined copy assignment operator, it almost certainly requires all three.
- Rule of Five
  - Because the presence of a user-defined destructor, copy constructor or copy
    assignment operator prevents implicit definition of the move constructor
    and the move assignment operator, any class for which move semantics are
    desirable, should declare all five special member functions.
- Other guidelines
  - in the assignment operator, consider the case when source and target are the same
  - avoid to unnecessarily copy large data types and structures
    - if possible use `const T &foo` instead of `T foo`, if T can be more then
      a couple of bytes
    - think about allowing functions to steal resources
  - consider Copy and Swap idiom
    - Implement a swap function (Attention: you may not be able to use std::swap)
    - Reuse the assignment operator am move constructor from previous slides for all your classes
    - a disadvantage of copy and swap is that some deallocation may be delayed
    - following articles may help:
      - [What is Copy and Swap idion](https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom)
      - [rval refs](http://thbecker.net/articles/rvalue_references/section_01.html)
      - [drawbacks of implementing move](https://scottmeyers.blogspot.com/2014/06/the-drawbacks-of-implementing-move.html)

#### Sidebar: Reference Counting and std::string

- Advantage of ref counting
  - Strings only copied when they need to be copied
- Disadvantage of ref counting
  - operator[] may invalidate iterators
  - string::data() retun char\* to string data (hard to capture modification)
  - Need to lock string whenever ref counter is updated
- In C++98 std::string may or may not use ref counting
- Starting w/ C++11 std::string cannot be reference counted, they use small
  object optimization instead

## Lecture 5

### Regular Expressions

- Some Patterns
  - `Hello` - matches sequence Hello
  - ` *` - matches any sequence of space characters. `+` would be on or more
  - `Hello.*` - matches any sequence beginning with Hello, `.` being any character
    and matching zero or more
  - `[A-Za-z]` matches any word constiging of letters
  - `^Hello` - the sequence at the beginning of the search space. `$` is the
    end of the search space
  - `[^class]` matches any character except for those in class
  - `^[^,]*,` - the first comma separated value field int he search space
- more rules

  - `xy?` - x possibly followed by y
  - `x{2,4}` - two to four occurences of x
  - `x|y` - x or y
  - `(xy)|(ab)` - parenthesis to form groups
  - `\d`, `\s`, `\w` - Decimal digit, space, letter

- how can we match a windows share name `\\server\sharename`
- using raw strings in comb w/ regexs
  - R"Delim(string)Delim" - Delim may be omitted

```cpp
char *regex1 = "\\\\\\w+\\\\w+";
char *regex2 = R"(\\\w+\\w+)"
```

- RegEx can be created with regex class and matched with regex_match function
- following matches signed/unsigned integers

```cpp
#include <regex>
int main(int argc, char *argv[]) {
  string input;
  regex integer("(\\+|-)?[[:digit:]]+");
  while (true) {
    cout << "Give me an integer! " << endl;
    cin >> input;
    if (input=="q") break;
    if (regex_match(input, integer)) cout << "good" << endl;
    else cout << "bad" << endl;
  }
}
```

- looking for matches is done with regex_search, returned in smatch
- this example parses US zip codes such as, CA 12345, CA 12345-1234

```cpp
#include <regex>
int main(int argc, char *argv[]) {
  regex zip(R"(\w{2}\s*\d{5}(-\d{4})?)");
  for (string line; getline(cin, line);) {
    smatch matches;
    if (regex_search(line, matches, zip)) {
      cout << "Match: " << matches[0];
      if (matches.size()>1 && matches[1].matched)
      cout << "Submatch: " << matches[1];
      cout << endl;
    }
  }
}
```

- RegEx Flags
  - in regex_constants and ca be specified as second parameter to regex
  - ignore case: `icase`
  - no sub expressions in smatch: `nosubs`
  - optimize for matching speed: `optimize`
  - consider locale: `collation`
  - various other expression matching engies: ECMAScript, basic, extended, awk,
    grep, egrep

### Inheritance

- Definition of a class on the basis of another
- Kinds of inheritance
- code inheritance
- interface inheritance

#### Types of Inheritance

##### `public`

- to define an is-a relationship
- public and protected members will be inherited as defined in the base class
- derived classes:
  - are polymorph
    - have the type of the derived class
    - inherit the type of the base class(es) => may be used wherever the
      base class can be
  - in the base context
    - only those attributes which are defined in the base class my be used

##### `proteted, private`

- to define a has-a relationship (style-wise, frequently it is better to define
  the base class as attribute in the derived class)
- publi and protected members become protected, resp. private, members of
  the derived class
- **Avoid this type of inheritance!**
- derived classes:
  - parent's type is only inherited in the respective scope
    `protected` inherited type only visible within the class and subclasses
    - `private` inherited type only visible within the class itself
  - don't use it to just inherit the base class's code, use aggregation instead
  - usefulness:
    - if you need to override an interface provided by the base class AND
      if the fact that you inherit should not be visible outside the class
    - if the base class is empty (empty base class optimization)
    - in case this member needs to be initialized before any of the base
      classes

```cpp
class parent { // … };
class priv_inh : private parent { // … public: void priv(…); };
class prot_inh : protected parent { // … public: void prot(); };

int main(int argc, char *argv[]) {
  parent p1(1,2);
  priv_inh pri(1,2);
  prot_inh pro(1,2);
  parent &p2=pri; // error, private base
  parent &p3=pro; // error, protected base
}
void priv_inh::priv(parent &p) {
  priv_inh pri(1,2);
  if (…) priv(pri); // ok, inheritance visible to ourself
}
```

#### Code and Type Inheritance

- Access
  - The derived class may access the public members of the base class
  - no access to private members
  - additionally, members may be declared protected
    - these members may be used by the class itself and derived classes
  - Essentially, this is the same as in Java, except that package does not exist

```cpp
class String {
 protected:
  char *strg;
  unsigned int len;
 public:
  // etc.
}
--------------------------------------------------------------------------------
class String2 : public String {
 public:
  void toLower() {
    for (int i=0;i<len;++i) {
      strg[i]=tolower(strg[i]);
    }
}
--------------------------------------------------------------------------------
void foo(String2 s2) {
  s2.tolower();
  cout << s2 << endl;
}

int main(int argc, char *argv[]) {
  String s1="Hello ";
  String2 s2="World!";
  String &s3=s2; // ok, every String2 is a String
  cout << s1[0]; // ok, String implements operator[]
  cout << s2[0]; // ok, String2 inherits operator[]
  cout << s3[0]; // ok, String implements operator[]
  foo(s1);  // error s1 is a String
  foo(s2);  // ok, s2 is of type String2
  foo(s3); // error, type of s3 is String
}
```

#### Overriding Members

- members of base class can be overridden, redefine in sub class
- similar to java except C++ supports to bind (dispatch) member functions both
  statically and dynamically

#### Binding

Refers to the process of binding different entities to a specific symbol

- Variables

  - Constants are assigned their value during compile time
  - Other variables during runtime

- Functions

  - Functions have a specific implementaition, assigned at compile-time
  - Function pointers refer to a function that can be invoked like functions,
    the function they point to is assigned during runtime (unless constant)

- Member functions
  - By default, assigned based on object's compile-time type
  - Unless `virtual`, then based on object's run-time type

##### Static vs. Dynamic Binding

1. Static Binding (Dispatch)

- Performance
  - function to be executed determined based on variable's static type ->
    function can be inlines and more optimization options
- When you expect overriding members of your class is of limited value: consider
  making class or member function final

2. Dynamic Binding (Dispatch)

- Flexibility
  - determined based on object's run-time type
  - can only be inlined if the compiler can acertain run-time type
- When you expect subclasses to override aspects of your implementation -> best
  to define an interface

##### Dynamic Binding

Use `virtual` to indicate a member function should use dynamic binding

- it will stay `virtual` if declared so best name methods in subclasses consenquently
  with virtual
- a member function may be marked as `override` to signify it overrides a non-final
  virtual member function of the base class

Rules

- Arguments fixed
- Return value of a function can be restricted
  - `Stack Stack::clone()` -> `CountingStack CountingStack::clone()`
  - can be preferable to return a pointer/reference to Stack/CountingStack object

implementation (virtual method table)

- compiler puts member function into the virtual method table
- each class gets its own table
- each instance of a class has a pointer to a virtual method table
- Table is used during run-time to determine function to be invoked

![Virtual Method Table example](/media/virtmethtabl.png?raw=true)

Typical Examples

- Abstract Classes (/interfaces)
- Default implementations and callbacks/hooks

#### Abstract Classes (and Interfaces)

- Express concept, both define an interface and neither can be instantiated
- can use pointer and references to such classes

```cpp
Abstract Classes: Connect 4 Player Example
class Player {
 public:
  virtual string getName(void) = 0;
  virtual int play(const playfield &field) = 0;
};
```

- `=0` indicates that it's purely abstract
- if one method is abstract, then whole class is
- HINT: Never implement a member that only returns an error -> make the class abstract

#### Virtual Destructor

- As soon as you have a virtual member, implement a virtual destructor

#### Multiple Inheritance

##### Diamond Shape Inheritance

- if Base has no state, no problem
- if Base has a state:
  - Shall Base be inheritec twice, no change necessary
  - Shall Base be shared among subclasses: inherit virtually
    - `class A : public virtual Base` \
      `class B : public virtual Base`

#### Slicing

Basically upcasting

- can occur when
  - passing an object by value
  - or when assigning an object
- Frequently slicing 'works' as expected
  - since subclass is copied and new class is of the base type, it only operates
    on the base class elements
  - typically, the base and subcall use the base classes fields in a compatible
    way, hence no inconsistencies occur
  - if the subclass misuses the fields from the base class, e.g. reversing
    stack order, the copied object will be incomprehensible to the base class
  - repurposing fields of the base class, however, is asking for trouble
- BUT how do we 'properly' pass a CountingStack to a function expecting a base
  class?
  - By not copying the class
  - passing it by reference `Stack&, const Stack&`, or by pointer `Stack*, const Stack&`

#### Casts

- casts allow to 'convert' an object
- C Style cast T(o) is ambiguous

##### `static_cast<T>(o)`

- converts and Object o into given type T
- statically verified i.e. during compile time
- pre-defined, user-defined conversion
- e.g. `fraction fr(1,2); double f = static_cast<double>(fr);`

##### `dynamic_cast<T>(o)`

- checks whether o is of type T (down/crosscast)
- dynamically verified i.e. during run-time
- uses Run Rime Type Information (RTTI)
- Returns NULL if o is not of type T

```cpp
child c(…), *c1;
parent *p = &c;
c1 = dynamic_cast<child*>p;
```

##### `reinterpret_cast<T>(o)`

- Value (bit-pattern) of object o will be reinterpreted to be of type T
- not verified

```cpp
char *mem=reinterpret_cast<char*>(malloc(n*sizeof(char)));
```

## Lecture 6

### Exceptions

- Stack unwinding technique
  - generated/thrown as soon as an error is detected
  - caught from an error handling 'routine'
    integrated with destructor handling simplifying resource management
- can be used for optimization, though avoid
  - to return fro ma deeply nested invocation
- be careful when mixing code compiled with C and C++
  - however invoking only C routines from C++ is fine
- in principle everything can be thrown
  - though exceptions thrown by STL derive from exception
- ideally `catch (exception &e)` but `catch(...)` catches everything
- rethrowing: `throw;`

#### Exception Discrimination

- same as in Java or Python
- first catch clause matching is used, thereforce if inheritance betweend them
  put the most specific first

- no Finally in C++ since it has something better: deterministically invokd destructors

#### cleaing up in C++11

With Lambdas

```cpp
template<typename F> struct final_action {
  F clean;
  final_action(F f) : clean(f) {}
  ~final_action() { clean(); }
};

template<class F> final_action<F> finally(F f) {
  return final_action<F>(f);
}

void foo() {
  try {
    auto finally_action = finally([&]{ /* handler */ });
    // problematic code
  } catch ( /*…*/ ) {
    // exception handler
  }
}
```

#### Exception Specification

- if none specified, a routine can throw any exception
- `void foo() throw (...)` has been deprecated since C++11 and removed from C++17
- C++11 noexcept can take a constexpr as argument indicating the function may throw
  an exception, true, or not, false.

-- some parts are missing here

### Liskov Substitution Principle

"_If for each object `o1` of type `S` there is an object `o2` of type `T` such that
for all programs `P` defined in terms of `T`, the behaviour of `P` is unchanged
when `o1` is substituted for `o2` then `S` is a subtype of `T`._"

Put Simple: Every function/program must work the same when it is invoked with a subclass
instead of the expected class. This is the responsability of the subclasses.

- Avoid code inheritance
  - people will nail you down on how the base class is implemented
- If inheritance is needed define an interface
  - now only the documentation counts
- inherit the interface not the code
- if code inheritance is needed, prefer the use of an interface plus use aggregation
  - follow this esp. for Java
  - yes, more typing needed
- If this is really, really not an option, provide both an interface and a class
  to inherit from

### C++ Metaprogramming
- A computer program that uses (or generates) another program as its data
- Can be used to move computations from run-time to compile-time

```cpp
template<int P, int N> struct isprime2 {
	static const int res=isprime2<P,P%N?N-1:0>::res;
};
template<int P> struct isprime2<P, 1> {
	static const int res=1;
};
template<int P> struct isprime2<P, 0> {
	static const int res=0;
};
template<int P> struct isprime {
static const int res=isprime2<P, P/2>::res;};
int main(...) {
	cout << isprime<3>::res << ", " << isprime<4>::res << ", " << isprime<5>::res << endl;
}
```

#### Constant Expressions
- Certain initializers require a constant expression (Size bounds of arrays, case statements)
- Allow `constexpr` functions to be used for constant expressions
	- Must be possible to evaluate them at compile time
	```cpp
	constexpr int min(int a, int b) { return a<b? a : b; }
	int numbers[min(consta, constb)];
	```
#### Type Support Functions
- `auto, decltype, declval` specifiers/function
	- Allow us to identify the type of a given expression
	- These type support functions make many of the typedefs in classes (such as vector::value_type) “obsolete"
	- `auto` 
		- Type must be uniquely determined during compile-time
		- Removes references and const qualifiers
		```cpp
		void foo(vector<int> v, int i, string s) {
			auto it = v.begin(); // evaluated to vector<int>::iterator
			auto k = i>0 ? i : s; // ambiguous: int or string?
		}
		```
	- `decltype(e)`
		- Returns the type of the expression `e`
		- Unlike auto, decltype does not strip references

		```cpp
		void printTotalWidth(const vector<Shape> &shapes) {
			decltype(shapes.front().getWidth()) sum_width;
			for (const auto &s : shapes) {
				sum_width += s.getWidth();
			}
			cout << "width is " << sum_width << endl;
		}
		// remove_reference<decltype(...)>::type sum_width;
		```
	- `declval<t>`
		- Returns a reference to an object of type t
		- Since the object is never instantiated, it can only be used in decltype expressions
		```cpp
		template<class S> class Aggregator {
			decltype(declval<S>().getWidth()) sum_width;
			public:
			Aggregator() : sum_width(0) { /*void*/ }
			void operator()(const S &s) {
				sum_width += s.getWidth();
			}
		}
		```
- `is\_\* functions'\`
	- Allow us to identify the capability of a given type
	- Allows to verify as part of our template that the requirements for our template parameters are met
	- Allows to tweak our template implementation based on a type’s capability
	- One use of this is to generate easy to understand error messages
		```cpp
		#include <type_traits>
		template<typename T> class rpn_calculator {
			static_assert(is_copy_assignable<T>::value, "rpn_calculator's number type must be a copy assignable type");
		}
		```
#### SFINAE - Substitution Failure is Not An Error
- When an error occurs, typically the compiler stops evaluating the expression and issues an error
- For substitution failures, this behavior is not desirable

#### Concepts
- Concepts allow developers of templates to ...
	- Narrow down a priori the types that allowed for a template
	- Creates more readable error message
	- Allow the compiler to select different implementations based on a type’s capabilities
	```cpp 
	// Declaration of the concept “Comparable”
	template<typename T>
	concept Comparable = requires (T x) { x < x; };
	// Using the concept “Comparable”
	template<Comparable T>
		class rpn_calculator {
			/* implementations */
	};
	```
- Concept overloading
	- Concepts can be used in combination with overloading
	- Provide a minimum for comparable numbers that compares
	- A fallback for others that shows a “not supported” error
	```cpp
	template<typename T> concept Comparable = requires (T x) { x < x; };
	template<typename T> class rpn_calculator {
		void exec_min(void) requires Comparable<T> {
			T b=pop_back(), a=pop_back();
			push_back(mymin(a,b));
		}
		void exec_min(void) {
			cerr << "not supported" << endl;
		}
	};

	```
 ### Multithreading in a Nutshell
 - C++ provides a thread class
	- Needs to be passed to a functor (function, function object, lambda function)
	- The new thread is started immediately
	- Threads may be joined with the join() member function
	- Add `-pthread` to the g++ compiler flags
	```cpp
	#include <thread>
	struct printchar {
		char c;
		printchar(char ch) : c(ch) {}
		void operator()() { for (int i=0; i<9999; ++i) cout << c; }
	}
	int main(int argc, char *argv[]) {
		thread t1(printchar('a')), t2(printchar('b'));
		t1.join(); t2.join(); 
	}
	```
- Mutexes
	- Similar to the Java synchronized(object) { ... } mechanism C++ provides mutexes
	```cpp
	#include <thread>
	mutex mtx;
	int cnt=0;
	struct printchar {
		char c;
		printchar(char ch) : c(ch) {}
		void operator()() {
		for (int i=0; i<9999; ++i) {
		{ lock_guard lock(mtx); ++cnt; }
		cout << c;
	} } }
		```
- Async Executions, Futures
	- Asynchronous execution is provided by the async function
	- Async is clever enough to know the platform and only executes the function in a separate thread if beneficial on the platform
```cpp
	template <typename Iter>
		void parsum(Iter begin, Iter end) {
			int sum=0, sz=end-begin;
			if (sz<1000) {
				while (begin!=end) sum+=*begin++;
			} else {
				mid=begin+sz/2;
				auto handle=async([=]{ return parsum(begin,mid); });
				sum+=parsum(mid, end);
				sum+=handle.get();
			}
			return sum;
	}
```
### Advanced Input and Output
- I/O System
![I/O System](/media/iosystem.png)
	- Check the stream after input and output operations
	- Raise an exception as soon as an error occurs
		- ios::good - As the name suggests, all is fine
		- ios::fail - The last operation has failed but no characters have been lost
		- ios::bad - The last operation failed Characters may have been lost
		- ios::eof - End of file
	- By default errors are handled without exceptions
	- The exceptions members allow to change this
- Standard Manipulators
	- Normally 
	```cpp
	cin.setf(ios::oct, ios::basefield);
	cout.setf(ios::hex, ios::basefield);
	```
	- With Standard Manipulators
	```cpp
	cout << "dec:" << dec << i
		 << " hex:" << hex << i
		 << endl;
	```
- The stream buffer
	- Each stream has an underlying stream buffer
		- A stream buffer represents a series of characters
		- Can be obtained with `rdbuf()`
		- Can be obtained and set with `rdbuf(...)`
	- Output stream buffer
	![Output Stream Buffer](/media/outputstreambuffer.png?raw=true)
	- Input stream buffer
	![Input Stream Buffer](/media/inputstreambuffer.png?raw=true)

## Credits
Huge thanks to [@arminveres](https://www.github.com/arminveres), who wrote the inital version of this summary.
