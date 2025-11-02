#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num%2==0)
	{
	printf("EVEN\n");
	}
	if(num%2!=0)
	{
	printf("ODD\n");
	}
	getch();
}
