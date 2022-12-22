#include<all.h>
int factorial(int);
int factorial(int a)
{
int k;
if(a>1)
return a*factorial(a-1);

else
return 1;
}
void main()
{
clrscr();
int a;
printf("enter any number\n");
scanf("%d",&a);

printf("%d",factorial(a));
getch();
}