#include <stdio.h>

/** main - simple calculator
 * @choice:
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	int a, b, result;

	while (1)
	{

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	printf("Choice: ");
	scanf("%d", &choice);

	if (choice == 0)
	{
		printf("Bye!\n");
		break;
	}
	else if (choice < 0 || choice > 4)
	{
		printf("Invalid choice\n");
	}
	else if (choice == 1)
	{
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);
		result = a + b;
		printf("Result: %d\n", result);
	}
	else
	{
		printf("You selected option %d\n", choice);
	}
	}

	return (0);
}
