#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t;
int a[10];
//int a[10]={7,4,3,6,2,7,8,2,1,0};					//for hardcoded values in array
clrscr();
printf("Bubble sort algorithm");

printf("\nenter ten values\n");
for (i=0;i<10;i++)
	{
	scanf("\n%d",&a[i]);
	}

for(i=0;i<10;i=i+1)
	{
		for(j=0;j<10;j=j+1)
		{
			if (a[j]>a[j+1])
				{
				       t=a[j];
				       a[j]=a[j+1];
				       a[j+1]=t;


				       /*	a[j+1]=a[j]+a[j+1];							//for switching values of arrays without use of third variable											
					a[j]=a[j+1]-a[j];									//for switching values of arrays without use of third variable
					a[j+1]=a[j+1]-a[j];	*/								//for switching values of arrays without use of third variable
				}
		}
	}

for  (i=0; i<10; i++)
{
	printf("\n%d",a[i]);									//to print the sort out array
}


getch();
}