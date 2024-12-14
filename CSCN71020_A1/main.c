#include <stdio.h>

// Function declarations
void printWelcomeMenu();
void printOptions();
void add();
void sub();
void multiply();

// Main function
int main(void) {
    printWelcomeMenu();
    printOptions();

    int inputNum;

    printf("Enter operation number: ");
    scanf_s("%d", &inputNum);  // Use standard scanf

    switch (inputNum) {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multiply();
            break;
        default:
            printf("Invalid operation number.\n");
            break;
    }

    return 0;
}

// Function to print the welcome menu
void printWelcomeMenu() {
    printf(" **********************\n");
    printf("**   Welcome to the   **\n");
    printf("**   BCS Calculator   **\n");
    printf(" **********************\n");
}

// Function to print options
void printOptions() {
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
}

// Function to add two numbers
void add() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, result);
}

// Function to subtract two numbers
void sub() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, result);
}

// Function to multiply two numbers
void multiply() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 * num2;
    printf("%lf * %lf = %lf\n", num1, num2, result);
}
