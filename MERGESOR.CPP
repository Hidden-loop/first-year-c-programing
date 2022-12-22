#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={2,4,9,11,21};
int b[7]={1,2,3,5,7,8,10};
int c[12]={0};
int k,i=0,j=0;
clrscr();
for(k=0;k<12;k++)
{
	if(b[j]<a[i] && j<7)
	{
		c[k]=b[j];
		j++;
	}
	else
	{
		c[k]=a[i];
		i++;
	}

}

for(k=0;k<12;k++)
printf("\n%d",c[k]);

getch();
}