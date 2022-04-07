#include<conio.h>
#include<stdio.h>

void main()
{
	int a = 6, b = 4, c=101;

	printf(" a & b is: %d \n", a&b);


    printf(" a | b is: %d \n", a | b);

	printf(" a ^ b is: %d \n", a ^ b);

	printf(" c left shifted twice:%d ", c<<2);

	printf(" c right shifted twice:%d ", c>>2);


	_getch();
}
