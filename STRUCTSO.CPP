#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int roll;
	char name[25];
};
struct temp
{
	char tname[25];
};

typedef struct student stud;
typedef struct temp temp;

void main()
{
clrscr();
stud s[5];
temp t[5];
for(int i=0;i<5;i++)
{
	printf("enter roll number");
	scanf("%d",&s[i].roll);

	printf("enter names");
	scanf("%s",&s[i].name);
	fflush(stdin);
	clrscr();
}

for(i=0;i<5;i++)
	printf("roll=%d\t name=%s\n",s[i].roll,s[i].name);

for(i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		if(s[i].roll<s[j].roll)
			{
			int k=s[i].roll;
			s[i].roll=s[j].roll;
			s[j].roll=k;

			strcpy(t[i].tname,s[i].name);
			strcpy(s[i].name,s[j].name);
			strcpy(s[j].name,t[i].tname);
			}
	}
}

for(i=0;i<5;i++)
	printf("%d\t %s\n",s[i].roll,s[i].name);
getch();
}