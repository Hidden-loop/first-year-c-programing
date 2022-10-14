#include<stdio.h>
#include<conio.h>
int k;
void add(int,int);
void main()
{
    clrscr();
    int x,y;
    printf("enter first number \n");
    scanf("%d",&x);

    printf("enter second number \n");
    scanf("%d",&y);

    add(x,y);

    printf("addition of the two numbers is %d",k);

    getch();
}

void add(int a,int b)
{
    k=a+b;

}
