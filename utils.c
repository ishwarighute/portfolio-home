#include <stdio.h>
#include "utils.h"

void trigger_or_process(int *ptr) {
    printf("Attempting to read value...\n");
    /* Step 4: Deliberate segmentation fault when ptr is NULL */
    printf("Value is: %d\n", *ptr);
}