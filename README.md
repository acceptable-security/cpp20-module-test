# cpp20-module-test

A small sample of C++20 modules.

## Requirements

- clang >= 17
- ninja
- CMake >= 3.28

## Build

*NOTE: This is for macOS using Homebrew. Adjust as necessary.*

```
cmake -GNinja -DCMAKE_C_COMPILER=/usr/local/Cellar/llvm/17.0.4/bin/clang -DCMAKE_CXX_COMPILER=/usr/local/Cellar/llvm/17.0.4/bin/clang++ ..
```
