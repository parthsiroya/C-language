#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);

	if (num>0)
	{
	printf("The number is positive\n");
	}
	else if(num<0)
	{
	printf("The number is negative\n");
	}
	else
	{
	printf("The number is Zero\n");
	}
	getch();
}
