#include<All.h>

void main()
{
clrscr();
int a[10];
int b[10];
int c[10];
int x,y,z;

for (x=0;x<10;x++)
{
	printf("enter values for first array:");
	scanf("\n %d",&a[x]);
}

for (y=0;y<10;y++)
{
	printf("enter values for second array:");
	scanf("\n %d",&b[y]);
}

for (z=0;z<10;z++)
{
	c[z]=a[z]+b[z];
	printf("\n %d",c[z]);
}

getch();
}