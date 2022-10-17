#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10]={11,49,34,5,56,28,34,45,15,43};
int max=0, max2=0, i;

for (i=0;i<10;i++)
{
	if (a[i]>max2)
	{
		if (a[i]>max)
		{
			max2=max;
			max=a[i];
		}

		else
			max2=a[i];
	}

}

printf("maximum value is %d\n",max);
printf("second maximum value is %d\n",max2);

getch();
}
