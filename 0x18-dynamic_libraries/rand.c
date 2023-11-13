#include <stdlib.h>
int rand(void) { static int i; return ++i % 76; }
