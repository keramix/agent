#include "vmci_sockets.h"
#include "connection_types.h"
#include <stdio.h>

int main() {
    if (vmci_init(5005) == -1 ) {
        printf("result is -1");
    }
    printf("program exiting");
    return 0;
}