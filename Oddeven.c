#include<stdio.h>
#include<conio.h>

void main()
{
	int num,c;
	printf("Enter the number:\n");
	scanf_s("%d", &num);
	c = num % 2;
	if (c == 1)
	{
		printf("The number is odd");
	}
	else
	{
		printf("The number is even");
	}

	_getch();
	
}