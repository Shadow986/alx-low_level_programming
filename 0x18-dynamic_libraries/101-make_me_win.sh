#!/bin/bash
echo '#include <stdlib.h>' > rand.c
echo 'int rand(void) { static int i; return ++i % 76; }' >> rand.c
gcc -shared -o rand.so rand.c
export LD_PRELOAD=$PWD/rand.so
