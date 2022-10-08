#include<stdio.h>
#include<conio.h>
#include<STDLIB.H>
void main()
{
clrscr();
int d,x;
start:
	printf("\n dice game \n");
	printf("press 0 to exit and 1 to continue\n");
	scanf("%d",&x);
	if (x==0)
	exit (0);
d=rand() % 7;
switch(d){
case 1:printf("face value 1");
       break;
case 2:printf("face value 2");
       break;
case 3:printf("face value 3");
       break;
case 4:printf("face value 4");
       break;
case 5:printf("face value 5");
       break;
case 6:printf("face value 6! it's a lucky roll!");
       break;
default:printf("retry"); break;
}
getch();
goto start;
}