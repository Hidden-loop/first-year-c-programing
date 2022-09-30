#include <stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],c[20];
    int x,y;
     clrscr();
    printf("enter numbers for first array \n");
    for(x=0;x<10;x++)
    {
     scanf("\n %d",&a[x]);
    }
    printf("\n enter numbers for second array \n");
    for(x=0;x<10;x++)
    {
	scanf("\n %d",&b[x]);
    }
    for(y=0;y<10;y++)
    {
        c[y]=a[y];
    }
    for(y=10,x=0;y<20,x<10;x++,y++)
    {
        c[y]=b[x];
    }   
	printf("the third array is:");
    for(y=0;y<20;y++)
    {
        printf("\n %d",c[y]);
    }
    getch();
}
