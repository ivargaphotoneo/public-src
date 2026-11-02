# private-src

A minimal C++ project that prints `Hello World!`.

With some math!

## Requirements

- C++17 compiler
- CMake 3.16 or newer

## Build

```
cmake -S . -B build
cmake --build build
```

## Run

```
./build/hello          # Linux/macOS
build\Debug\hello.exe  # Windows (MSVC multi-config generator)
```

Output:

```
Hello World!
```

## Files

- `main.cpp` — program entry point
- `CMakeLists.txt` — build definition (target `hello`)
