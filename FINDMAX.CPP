#include<All.h>
void main()
{
clrscr();
int a[10]={12,33,4,2,1,5,54,31,31,23};
int i,max=0;

for (i=0;i<10;i++)
{
	if (a[i]>max)
	{
		max=a[i];
	}
}

printf("%d",max);

getch();
}

