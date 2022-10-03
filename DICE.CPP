#include<stdio.h>
#include<conio.h>
#include<STDLIB.H>						//included to use break command
void main()
{

int d,x=0;
	printf("\n dice game \n");
	d=rand() % 7;						//rand is used to generate a random number before the term after '%', d is used to store this random value
start:								//goto label is defined by having ':' at end
clrscr();
switch(d){							//begining of the switch case
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
default:printf("retry"); break;					//default case is when input other than specified number is given
}
goto start;							//goto function is used to return the loop to the label
getch();
}
