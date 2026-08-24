#include <stdio.h> // Includes the standard input/output library


int main() { // Main function where the program starts

    int number; // Declares an integer variable named number

    printf("Enter an integer: "); // Asks the user to enter an integer
    scanf("%d", &number); // Stores the user's input in the variable number

    if (number % 2 == 0) { // Checks if the number is divisible by 2 with no remainder
        printf("%d is an Even number.\n", number); // Displays that the number is even
    } else { // Runs if the number is not divisible by 2
        printf("%d is an Odd number.\n", number);  // Displays that the number is odd
    }

    return 0; // Ends the program successfully
}