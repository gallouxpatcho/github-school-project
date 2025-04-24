#include <stdio.h>

void main() {
    int i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0)
                printf("%d ", i);
        }
    } else
        printf("Invalid input.\n");
}
