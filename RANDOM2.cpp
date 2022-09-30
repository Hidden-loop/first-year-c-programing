#include<stdio.h>
#include<conio.h>
#include<STDLIB.H>
void main()
{

int x,y[10],z;
clrscr();
printf("ten random numbers from 0 to 100 are\n");		//change the limits as per requirement

for(x=0,z=0;x<=10;x++,z++)		//change the termination condition to increase/decrease the amount of random numbers generated
{
	y[z]=rand() % 100;		//rand() is used to generate random numbers, the num after "%" is the upper limit to which number will be generated
	printf("%d \n",y[z]);
}

printf(" \n number in array are:");

for(z=0;z<11;z++)
{
	printf("\n %d",y[z]);
}

getch();
}