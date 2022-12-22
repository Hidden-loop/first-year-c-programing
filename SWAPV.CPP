#include<all.h>
void swapv(int a, int b)
{
int temp=0;

temp=a;
a=b;
b=temp;
printf("a=%d,b=%d\n",a,b);
}
void main()
{
clrscr();
int x,y;
printf("enter first number\n");
scanf("%d",&x);
printf("enter second number\n");
scanf("%d",&y);

swapv(x,y);
printf("\nthe values of x=%d, y=%d",x,y);

getch();
}