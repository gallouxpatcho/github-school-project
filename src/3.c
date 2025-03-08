#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can drive a car.\n");
    } else {
        printf("Sorry, you are not old enough to drive a car yet.");
    }

    return 0;
}
