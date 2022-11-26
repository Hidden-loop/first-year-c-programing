#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;

for (x=1;x<5;x++)
{
	printf("\n");

	for(z=x;z<4;z++)
	printf(" ");

	for(y=1;y<=x;y++)
	{
		printf("%d ",x);

	}
}

getch();
}