#include<stdio.h>
#include<conio.h>
void disp();
int i=0;

void main()
{
clrscr();
disp();
disp();
disp();
printf("\nthe function was called %d times",i);
getch();
}

void disp()
{
i=i+1;
static int x=5;
x=x+1;
printf("value of x after function %d\n",x);

}