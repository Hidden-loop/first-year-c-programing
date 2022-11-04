#include<stdio.h>
#include<conio.h>
void fun(int[]);
void main()
{
clrscr();
int i,a[10]={0};
fun(a);
for(i=0;i<10;i++)
printf("\n %d",a[i]);

getch();
}

void fun(int a[])
{
int i;

for (i=0;i<10;i++)
a[i]=i;
}
