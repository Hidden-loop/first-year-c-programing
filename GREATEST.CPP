#include<All.h>
void main()
{
int a,b,c,d;
clrscr();

printf("\nplease enter the first number\n");
scanf("\n%d",&a);

printf("\nplease enter the second number\n");
scanf("\n%d",&b);

printf("\nplease enter the third number\n");
scanf("\n%d",&c);

printf("\nplease enter the fourth number\n");
scanf("\n%d",&d);

if (a>d)
 {																				//if a is greater this start
	if (a>c)
	 {
		if (b>a)

			printf("\n %d is the greatest number\n",b);

		 else
			printf("\n %d is the greatest number\n",a);
	 }
		else
			printf("\n %d is the greatest number\n",c);

  }
	  else									
	   {																		//if d is greater this will start
		if (c>d)
		 {
			if (b>c)
				printf("\n %d is the greatest number\n",b);

			else
				printf("\n %d is the greatest number\n",c);
		 }
		 else
			if (b>d)
				printf("\n %d is the greatest number\n",b);
			else
				printf("\n %d is the greatest number\n",d);

	   }

getch();
}
