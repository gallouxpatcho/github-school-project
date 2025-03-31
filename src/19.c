#include <stdio.h>

int main() {
    int x = 5;
    int y;

    printf("Enter an integer: ");
    scanf("%d", &y);

    if (x > y) {
        printf("%d is greater than %d\n", x, y);
    } else {
        printf("%d is not greater than %d\n", x, y);
    }

    return 0;
}
