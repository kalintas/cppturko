mkdir build
cmake -B build -DCMAKE_BUILD_TYPE=Release .
cmake --build build --config cppturkogen
./build/gen/cppturkogen
cmake --build build --config cppturko