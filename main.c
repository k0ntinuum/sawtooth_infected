#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "constant.c"
#include "bits.c"
#include "text.c"
#include "print.c"
#include "compute.c"
#include "demo.c"

int main() {
    srand(time(NULL));
    demo();
}
      