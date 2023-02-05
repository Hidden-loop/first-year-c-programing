// program for restraunt billing system

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void menu(void);
void bill(void);
void invoice(void);

struct customer
{
    char name[25];
    long mobile;
    char date[6];
};

typedef struct customer details;

details c[10];

float tax = 0;
int n = 0, quant = 0;
char ch[50];
long total = 0;

void main()
{
    fflush(stdin);
    clrscr();

    char a;
    printf("\n\t\t\t--Welcome Customer--\n");

    menu();

    getch();
}

void menu(void)
{
    fflush(stdin);
    int x;
    textcolor(GREEN + BLINK);
    printf("\t\t\t   ");
    cprintf(" dope restro ");

    textcolor(RED);
    printf("\n\t\t");
    cprintf("so what we feeling today chief?");
    printf("\n\t");
    cprintf("\n1)snacks? 2)main course? 3)desserts? 4)bevrages?\n");
    scanf("%d", &x);
    // settextstyle(int font_names= 2, int direction= 0, int font_size= 6);
    // cprintf("\nHere you go chief:\n");
    clrscr();

    switch (x)
    {
    case 1:
        cprintf("\n\t1]Snacks:\n");
        printf(" 1)french fries\t 70Rs\n 2)potato shots\t 80Rs\n 3)nachos\t 55Rs\n");
        invoice();
        break;
    case 2:
        cprintf("\n\t2]main course:\n");
        printf(" 1)pav bhaji\t 110Rs\n 2)shahi paneer\t 95Rs\n 3)idli sambar\t 100Rs\n");
        invoice();
        break;

    case 3:
        cprintf("\n\t3]desserts:\n");
        printf(" 1)brownie\t 95Rs\n 2)ice cream\t 70Rs\n 3)pastry\t 65Rs\n");
        invoice();
        break;

    case 4:
        cprintf("\n\t4]bevrages:\n");
        printf(" 1)Virgin mojito\t 100Rs\n 2)blue lagoon\t 90Rs\n 3)pina colada\t 110Rs\n");
        invoice();
        break;

    default:
        break;
    }
}

void invoice(void) // for creating bill
{
    fflush(stdin);
    printf("\ndate:\t");
    scanf("%s", &c[1].date);

    fflush(stdin);

    printf("\n Customer Details:\n");
    printf("Name:\t");
    scanf("%s", &c[1].name);

    fflush(stdin);

    printf("\n mobile number:\t");
    scanf("%d", &c[1].mobile);

    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("-*-");
    }
    fflush(stdin);
    printf("\n enter item names:\t");
    scanf("%s", &ch);

    fflush(stdin);

    printf("\n enter item number:\t");
    scanf("%d", &n);

    printf("\nenter item quantity:\t");
    scanf("%d", &quant);

    switch (n)
    {
    case 1:
        n = 70;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 2:
        n = 80;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 3:
        n = 55;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 4:
        n = 110;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 5:
        n = 95;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 6:
        n = 100;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 7:
        n = 95;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 8:
        n = 70;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 9:
        n = 65;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 10:
        n = 100;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 11:
        n = 90;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    case 12:
        n = 110;
        tax = (n / 100) * 18;
        total = n + tax;
        break;
    default:
        break;
    }
    // gst is only applicable for item with prices above 100Rs
    clrscr();
    bill();
}

void bill(void) // for displaying bill
{
    fflush(stdin);
    printf("\ndate:\t%s", c[1].date);
    printf("\nCustomer name:\t%s", c[1].name);
    printf("\nCustomer mobile number:\t%d", c[1].mobile);

    printf("\n\n item quantity price gst      total");
    printf("\n\n %6s  %6d %4d %6f  %4d\n", ch, quant, n, tax, total * quant);
}
