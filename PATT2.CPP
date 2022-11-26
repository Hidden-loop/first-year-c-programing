#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,q,r=1;

for(p=1;p<5;p++)
{
	for(q=1;q<=p;q++)
	{
		printf("%d",r);
		++r;
	}
		printf("\n");
}

getch();
}