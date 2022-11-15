# Makefile layout
```
─┬[ Project ]
 │
 ├──● Makefile
 │
 ├──┬[ build ]
 │  │
 │  ├───[ objects ]
 │  └───[ apps ]
 │
 ├──┬[ include ]
 │  │
 │  ├──● program.h
 │  │
 │  ├──┬[ module1 ]
 │  │  │
 │  │  ├──● mod1c1.h
 │  │  └──● mod1c2.h
 │  │
 │  └──┬[ module2 ]
 │     │
 │     ├──● mod2c1.h
 │     └──● mod2c2.h
 │
 └──┬[ src ]
    │
    ├──● program.cc
    │
    ├──┬[ module1 ]
    │  │
    │  ├──● mod1c1.cc
    │  └──● mod1c2.cc
    │
    └──┬[ module2 ]
       │
       ├──● mod2c1.cc
       └──● mod2c2.cc
```

- [Source](https://www.partow.net/programming/makefile/index.html)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/make.html)

