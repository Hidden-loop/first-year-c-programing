#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(j=0;j<5;j++)
{
for(i=j;i<5;i++)
{
	printf("*");
}
	printf(" ");
	printf("\n");
}
getch();
}