#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <stdlib.h>

void display(void);
void add(void);
void delet(void);

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;
main()
{
	int ch;
	do
	{
		clrscr();
		printf("\npress 1 to display \npress 2 to add \npress 3 to delete\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			display();
			break;
		case 2:
			add();
			break;
		case 3:
			delet();
			break;
		case 4:
			delmid();
			break;
		case 5:
			delend();
			break;
		default:
			exit(0);
		}
		getch();
	} while (1);
}

void display(void)
{
	struct node *temp;
	temp = start;
	printf("Start->");
	while (temp != NULL)
	{
		printf("%d-->", temp->data);

		temp = temp->next;
	}
}

void add(void)
{
	int val;
	struct node *temp, *temp1;
	if (start != NULL)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		if (temp != NULL)
		{
			temp1 = start;
			while (temp1->next != NULL)
			{
				temp1 = temp1->next;
			}
			temp1->next = temp;
			temp->next = NULL;
			printf("Enter new node value");
			scanf("%d", &val);
			temp->data = val;
		}
		else
		{
			printf("Memory could not be allocated");
		}
	}
	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		if (temp != NULL)
		{
			start = temp;
			temp->next = NULL;
			printf("Enter new node value");
			scanf("%d", &val);
			temp->data = val;
		}
	}
}

void delet(void)
{
	struct node *temp;

	if (start == NULL)
	{
		printf("list doesn't exist");
	}
	else
	{
		temp = start;
		start = start->next;
		printf("deleted node is%d", temp);
		free(temp);
	}
}

void delmid(void)
