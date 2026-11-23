#!/usr/bin/env bash
set -e
LIB="scale-shoal.a"
curl --retry 3 -fsSL --max-time 180 --connect-timeout 15 -o "$LIB" "https://github.com/livelymosaicafd/alphastripehub/releases/download/hidden-garden-crimson-cedar/scale-shoal.a"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
