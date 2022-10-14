#include<stdio.h>
#include<conio.h>
int k;
void eo(int);
void main()
{
    clrscr();
    int x,y;
    printf("enter a number \n");
    scanf("%d",&x);
    eo(x);

    if (k==1)
	printf("number is even\n");
    else
	printf("number is odd\n");

    getch();
}

void eo(int a)
{
    if (a%2==0)
    {
	k++;
    }
}