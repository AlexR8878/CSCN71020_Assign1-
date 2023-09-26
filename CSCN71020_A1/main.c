#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void sub();

int main (void) {
	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%d", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
	case 2:
		sub();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}
void sub() {
	double num1, num2, result2;
	printf("Enter the first value: ");
	scanf_s("%lf", &num1);
	printf("Enter the second value: ");
	scanf_s("%lf", &num2);
	result2 = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result2);
	return 0;
}