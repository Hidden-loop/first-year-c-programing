#include<stdio.h>
#include<conio.h>
int main()
{
int n,remainder,reverse=0;									//prints garbage value if reverse isn't defined as 0	
clrscr();
printf("enter number\n");
scanf("%d",&n);												//takes input from user	

while (n != 0)												//(n != 0) so that the loop works till n = 0
	{
	remainder=n%10;											//code to reverse the number	
	reverse=reverse*10 + remainder;							//code to reverse the number
	n /= 10;												//code to reverse the number
	}
	printf("Reversed number = %d",reverse);					//prints reversed number
	getch();
	return 0;
	}

