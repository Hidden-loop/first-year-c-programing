#include <ALL.h>
void push(int);
void pop();
void disp();
int top = -1;
int a[10];

void main()
{
	clrscr();
	int x;
	do
	{
		printf("\n");
		printf("enter 1 for push\n");
		printf("enter 2 for pop\n");
		printf("enter 3 for disp\n");
		printf("enter 4 to clear screen\n");
		printf("enter 5 to exit\n");
		scanf("%d", &x);

		switch (x)
		{
		case 1:
			int val;
			printf("enter a value to push\n");
			scanf("%d", &val);
			push(val);
			break;

		case 2:
			pop();
			break;

		case 3:
			disp();
			break;

		case 4:
			clrscr();
			break;

		case 5:

			exit(0);

		default:
			printf("please retry");
		}
		getch();
	} while (1);
}

void push(int val)
{
	if (top == 9)
		printf("overflow");

	else
	{
		top = top + 1;
		a[top] = val;
	}
	disp();
}

void pop()
{
	if (top == -1)
		printf("underflow");

	else
	{
		top--;
		disp();
	}
}

void disp()
{
	int i;
	for (i = top; i >= 0; i--)
		printf("\n%d", a[i]);
}
