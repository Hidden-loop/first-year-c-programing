#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x1,x2,x3,y1,y2,y3;
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
int yo=(y2-y1)/(x2-x1);
int yi=(y3-y2)/(x3-x2);
if(yo==yi)
printf("collinear");
else
printf("not colinear");

getch();
}
