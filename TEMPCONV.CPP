#include <all.h>
void conv(float c) // function to convert celsius to fahrenheit
{
    float f = 0;

    f = c * 9 / 5 + 32;
    printf("\n%f", f);
}

void kelvin(float c) // function to convert celcius to kelvin
{
    float k = 0;

    k = c + 273.15;
    printf("\n%f", k);
}

void main()
{
fresh:
    clrscr();
    int a, x, y;
    printf("press 1 to convert celsius to farhenheit\n press 2 to convert celsius to kelvin\npress 3 to exit\n");
    scanf("%d", &y);

start:

    switch (y)
    {
    case (1):
        printf("\nenter temperature\n");
        scanf("%d", &a);
        conv(a);
        break;
    case (2):
        printf("\nenter temperature\n");
        scanf("%d", &a);
        kelvin(a);
        break;

    case (3):
        exit;
        break;

    default:
        printf("retry");
        break;
    }

    printf("\n press 0 to clear screen\n press 1 to convert again\n press anything else to exit\n");
    scanf("%d", &x);

    if (x == 0)
    {
        goto fresh;
    }
    else
    {
        if (x == 1)
        {
            goto start;
        }
        else
        {
            exit;
        }
    }

    getch();
}