mkdir build
cmake -B build -DCMAKE_BUILD_TYPE=Release .
cmake --build build --target cppturkogen
./build/gen/cppturkogen
cmake --build build --target cppturko