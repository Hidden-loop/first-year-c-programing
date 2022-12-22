#include<all.h>

void main()
{
 clrscr();
 int i,j,r;
 scanf("%d",&r);
 for(i=1;i<=r;i++)
 {
  printf("\n");
  for(j=1;j<=r;j++)
  {
   if(i==1||j==1||i==r||j==r||j==r-i+1||j==i)
   printf("* ");
   else
   printf("  ");
  }
 }
 getch();
}