#!/bin/bash
wget -P /tmp https://github.com/YassineBV/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mgigallib.so
export LD_PRELOAD=/tmp/mgigallib.so
