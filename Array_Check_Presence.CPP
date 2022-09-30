#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10]; //={1,2,3,4,5,6,7,8,9,10};
int i=0,x,y=1;

for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}

printf("\n enter number to check presence \n");
scanf("%d",&x);

for(i=0;i<10;i++)
{
	if(a[i]==x){
	//printf("\n  number present at %d",i);
	y=1;
	break;
	}

	else{
	//if(y!=0)
	{y=0;}
	}
}

	if(y==1){
	printf("number found at %d",i); }

	else{
	printf("number not found");}


getch();
}
