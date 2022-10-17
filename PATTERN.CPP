#include<conio.h>
#include<stdio.h>
void main()
{
int x,y,z;
clrscr();
for(x=1;x<5;x++)
{
	printf("\n");

	for(z=x;z<4;z++)
		printf(" ");

	for (y=1;y<=((2*x)-1);y++)
		printf("*");

}
//printf("\n");

for (x=1;x<4;x++)
	printf("\n  |||");

printf("\n /___\\");
getch();
}