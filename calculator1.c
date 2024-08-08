#include <stdio.h>
#include <stdlib.h> // Added for system("pause")

int main(){
    char operator;
    double num1, num2, result; // Declare variables to store the two mnumbers and results

    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &operator); // Added a space before %c to ignore any leading whitespace also reads a single character from the user input and stores it in the operator variables
	

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // reads two double precision floating point numbers from user and stores them in num1 and num2,

    switch (operator) { // begins  a switch statement that will execute different code blocks based on the value of the operator
        case '+':       // if the operator chosen is + the block will execute
            result = num1 + num2;    // adds num1 and num2 and stores them in results
            break;  // exits the switch statement
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.\n");
                return 1; // Added return statement here to exit the program in case of error
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1; // Added return statement here to exit the program in case of invalid operator
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result); // Added a comma before the variables

    system("pause"); // This is specific to Windows to pause the console

    return 0;
}
