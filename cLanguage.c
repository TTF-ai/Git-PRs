#include <stdio.h>

int main() {
    int number1, number2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    
    // Read the input from the user
    scanf("%d %d", &number1, &number2);

    // Calculate the sum using the '+' operator
    sum = number1 + number2;

    // Display the result
    printf("%d + %d = %d", number1, number2, sum);

    return 0;
}
