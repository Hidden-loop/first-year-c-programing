#include<stdio.h>
#include<conio.h>
void disp();

void main()
{
clrscr();
int x=5;
printf("%d\n",x);
disp();
getch();
}

void disp()
{
int x=5;
printf("value of x after function %d\n",x);

}