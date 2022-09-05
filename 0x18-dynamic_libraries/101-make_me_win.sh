#!/bin/bash

wget -P /tmp https://github.com/Liyosi1996/alx-low_level_programming
/raw/master/0x18-dynamic_libraries/libmask.so

export LD_PRELOAD="$PWD/../libgiga.so"
