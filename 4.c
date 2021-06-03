#include <stdio.h>
int main() {
    printf("2\n");
    int digit;
    int divisor;
    for (digit = 3; digit <= 15; digit += 2) {
        for (divisor = 3; divisor < digit; divisor += 2){
            printf("%d mod %d \n", digit, divisor);
        }
    }
    return 0;
}
