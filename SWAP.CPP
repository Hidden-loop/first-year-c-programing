#include<All.h>
void main()
{
int a,b;
//int c;
clzrscr();

printf("enter first variable\n");
scanf("%d",&a);

printf("enter second variable\n");
scanf("%d",&b);

/*c=a;
a=b;
b=c;*/

b=a+b;
a=b-a;
b=b-a;

printf("first variable now is %d\n second variable is %d",a,b);

getch();
}