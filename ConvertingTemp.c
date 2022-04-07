#include<conio.h>
#include<stdio.h>

void main()
{
	int f, c, choice;

	printf("Enter Your choice \n 1 for Farenheit \n 2 for Celcius\n");
	scanf_s( "%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Enter temperature in Celcius: ");
		scanf_s("%d", &c);
		f = 9 * (c + 32) / 5;
		printf("The temperature in Farenheit is: %d", f);
		break;
	case 2:
		printf("Enter temperature in Farenheit:");
		scanf_s("%d", &f);
		c = 5 * (f - 32) / 9;
		printf("The Temperature in Celcius is: %d", c);
		break;
	default:
		printf("Invalid choice");
		break;
	}
	_getch();

}