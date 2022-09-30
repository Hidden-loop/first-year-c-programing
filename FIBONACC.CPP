#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int x,y;

int a=0,b=1;
int newterm=a+b;

printf("enter the term");
scanf("%d",&x);

printf("fibonacci series: %d, %d,",a,b);

for(y=1;y<=x;y++)
{
printf("%d,",newterm);
a=b;
b=newterm;
newterm=a+b;
}

getch();
}