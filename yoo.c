//write a c program to check whether the given input is divisible by 3 or 5. if the input is divisible, print it as "number1" is divisible by "number2"

#include <stdio.h>

int main() {
    int number1;
    printf("Enter a number: ");
    scanf("%d", &number1);

    if (number1 % 3 == 0) {
        printf("%d is divisible by 3\n", number1);
    } else if (number1 % 5 == 0) {
        printf("%d is divisible by 5\n", number1);
    } else {
        printf("%d is not divisible by 3 or 5\n", number1);
    }

    return 0;
}

