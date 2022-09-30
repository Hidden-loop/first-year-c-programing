#include<stdio.h>
#include<conio.h>
#include<STDLIB.H>
void main()
{

int d,x=0;
	printf("\n dice game \n");
	d=rand() % 7;
start:
clrscr();
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
goto start;
getch();
}