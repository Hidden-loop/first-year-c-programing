#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int ch,x,y,z;
clrscr();

do{
printf("\n choose something");
printf("\n enter 1 for add");
printf("\n enter 2 for sub");
printf("\n enter 3 for multiplication");
printf("\n enter 4 for division");
printf("\n enter 0 to exit \n");

scanf("%d",&ch);

switch(ch)
{
default:printf("default case"); exit(0);
	break;

case 0: exit(0);

case 1: printf("\n enter first number \n");
	scanf("\n %d",&x);

	printf("\n enter second number \n");
	scanf("\n %d",&y);
	z=x+y;
	printf("%d",z);
	break;

case 2:printf("\n enter first number \n");
	scanf("\n %d",&x);

	printf("\n enter second number \n");
	scanf("\n %d",&y);
	z=x-y;
	printf("%d",z);
	break;

case 3:printf("\n enter first number \n");
	scanf("\n %d",&x);

	printf("\n enter second number \n");
	scanf("\n %d",&y);
	z=x*y;
	printf("%d",z);
	break;

case 4: printf("\n enter first number \n");
	scanf("\n %d",&x);

	printf("\n enter second number \n");
	scanf("\n %d",&y);
	z=x%y;
	printf("%d",z);
	break;

}
}while(1);
}




