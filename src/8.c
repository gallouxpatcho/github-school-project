#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x = 5;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! You are %d years old.\n", name, x);
    return 0;
}
