#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int a, b;

    for (b=1;b<6;b++)
    {

    for (a = 1; a <= b; a++)
    {
	printf("%d\t", a);
    }
    printf("\n");
    }
getch();
}