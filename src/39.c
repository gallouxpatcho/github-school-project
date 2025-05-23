#include <stdio.h>

void main() {
    int i;
    for(i = 0; i <= 5; i++) {
        if(i % 2 == 0) {
            printf("Even number: %d\n", i);
        } else {
            printf("Odd number: %d\n", i);
        }
    }
}
