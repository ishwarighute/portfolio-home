#include <stdio.h>
#include "utils.h"

int main(void) {
    int *data_ptr = NULL; /* Deliberately NULL for Step 4; fix in Step 5 */

    printf("Starting multi-file C program...\n");
    trigger_or_process(data_ptr);
    printf("Program finished successfully.\n");

    return 0;
}