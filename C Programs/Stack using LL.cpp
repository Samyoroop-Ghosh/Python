#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

struct node * top = NULL;

void display()
{
	struct node * current = top;
	if(top==NULL)
		printf("\nEMPTY STACK");
	else
	{
		printf("\n");
		while(current!=NULL)
		{
			printf("%d - ",current->data);
			current=current->next;
		}
	}
}

void push()
{	
	int newData;
	printf("\nEnter an element to insert : ");
	scanf ("%d",&newData);	
	struct node * newNode = (struct node *) malloc(sizeof(struct node));
	newNode-> data = newData;
	newNode->next = top;
	top = newNode;	
}

void pop()
{
	if(top!=NULL)
	{
		printf("\n%d has been deleted\n",top->data);
		top = top->next;	
	}	
}

void peek()
{
	printf("\nPEEK DATA = %d\n",top->data);
}

int main()
{
	int choice = 0;
	while(choice!=999)
	{
		printf("\n\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Display\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				push();
				display();
				break;
			case 2 :
				pop();
				display();
				break;
			case 3 :
				peek();
				break;
			case 4 :
				display();
				break;
			default :
				choice = 999;
				printf("\nExiting..");
		}		
	}
}
