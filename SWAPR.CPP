#include<stdio.h>
#include<conio.h>
void swapr(int*a,int*b)
{
int temp;

temp=*a;
*a=*b;
*b=temp;

}
void main()
{
clrscr();
int x=12;
int y=15;
printf("before swapping x=%d; y=%d\n",x,y);
swapr(&x,&y);
printf("x=%d, y=%d",x,y);

getch();
}