#include<stdio.h>
#include<conio.h>
#include<STDLIB.H>
void main()
{
int x;
clrscr();
printf("ten random numbers from 0 to 100 are\n"); 		//change the limits as per requirement
for(x=0;x<=10;x++) 		//change the termination condition to increase/decrease the amount of random numbers generated
{
	printf("%d \n",rand() % 100);		//rand() is used to generate random numbers, the num after "%" is the upper limit to which number will be generated

}
getch();
}