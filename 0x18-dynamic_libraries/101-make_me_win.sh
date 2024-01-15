#!/bin/bash
wget -P /tmp https://github.com/YassineBV/alx-low_level_programming/0x18-dynamic_libraries/mygiga_lib.so
export LD_PRELOAD=/tmp/mygiga_lib.so
