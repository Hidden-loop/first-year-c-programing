#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,x[10],y;

for (i=0;i<10;i++)
{
	scanf("%d",&x[i]);
}

for (i=0,j=9;i<=4;i++,j--)
{
	y=x[i];
	x[i]=x[j];
	x[j]=y;
}

//for (i=0;i<10;i++)	{x[i]=x[i]+1;}

for (i=0;i<10;i++)
{
	printf("\n %d ",x[i]);
}

getch();
}