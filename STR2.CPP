#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int count=0,i;
char p1[]={'h','e','l','l','o','\0'},
	p2[]={'h','e','y','\0'};

for(i=0;p2[i]!='\0';i++)
{
if(p1[i]==p2[i])
{
printf("match");
count++;
}
}

getch();
}