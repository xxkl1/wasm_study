#!/bin/bash

emcc add.cc -s WASM=1 -O3 --no-entry -o add.wasm