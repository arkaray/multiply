em++ -o multiply.js -s EXPORTED_FUNCTIONS='["_main","_multiply"]' --js-library multiply_in.js -s WASM=1 multiply.cpp
