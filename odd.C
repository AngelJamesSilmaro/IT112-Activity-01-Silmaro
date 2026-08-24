#include <stdio.h> // Includes the standard input/output library


int main() { // Main function where the program starts
    int num1, num2, sum; // Declares three integer variables

    printf("Enter first number: "); // Asks the user to enter the first number
    scanf("%d", &num1); / Stores the first number entered by the user

    printf("Enter second number: "); // Asks the user to enter the second number
    scanf("%d", &num2); // Stores the second number entered by the user

    sum = num1 + num2; // Adds num1 and num2 and stores the result in sum

    printf("The sum is: %d\n", sum); // Displays the sum of the two numbers


    return 0; // Ends the program successfully
}