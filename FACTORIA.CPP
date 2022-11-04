#include <stdio.h>
#include <conio.h>

int fact(int a)
    {

	if (a == 1)
	{
	  return 1;
	}

	else
	{
	    return(a * fact(a - 1));
	}

    }

void main()
{
    clrscr();
    int a,x;
    printf("enter a number to find it's factorial \n");
    scanf(" %d", &a);
    x=fact(a);
    printf("%d",x);
    getch();
}