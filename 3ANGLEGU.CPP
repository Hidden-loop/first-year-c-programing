#include<all.h>
void tri(float a,float b,float c)
{
if (a==b && b==c && c==a)
	printf("\nequilateral triangle\n");

else if (a==b || b==c || c==a)
	printf("\nisoscales triangle\n");

else
	printf("\nscalen triangle\n");

getch();
}

void main()
{

float a,b,c;
int i;
ask:

clrscr();
printf("\nenter 1 to guess, anything else to exit\n");
scanf("%d",&i);

switch(i){
case 1:
	printf("enter the sides:\n");
	scanf("%f\n",&a);
	scanf("%f\n",&b);
	scanf("%f",&c);
	tri(a,b,c);
	goto ask;

default: exit(0);
}
getch();
}