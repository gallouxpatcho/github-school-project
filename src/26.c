#include <stdio.h>

int main() {
    int i;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &i);
    
    if (i <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = 0;
        for (i; i > 0; --i) {
            sum += i;
        }
        
        printf("The sum of numbers from 1 to %d is: %d\n", i, sum);
    }
    
    return 0;
}
