#!/bin/bash
wget -P /tmp https://https://github.com/YassineBV/alx-low_level_programming/0x18-dynamic_libraries/mygigalib.so
export LD_PRELOAD=/tmp/mygigalib.so
