#include<stdio.h>
#define size 5

int top=-1;
int arr [size]={0};

void display()
{
	if(top==-1)
		printf("\nEMPTY STACK\n");
	else
	{
		for(int i=0;i<=top;i++)
			printf("[%d] %d -> ",i,arr[i]);	
	}	
}

void push()
{
	int new_data;
	if(top==size-1)
		printf("\nFULL STACK\n");
	else
	{
		top++;
		printf("\nEnter an element to insert : ");
		scanf ("%d",&new_data);	
		arr[top]=new_data;
		display();		
	}			
}

void pop()
{	
	if(top == -1)
		printf("\nEMPTY STACK\n");
	else
	{
		printf("\n%d has been deleted.\n",arr[top]);
		arr[top]=0;
		top--;	
		display();		
	}	
}

void peek()
{
	if(top == -1)
			printf("\nEMPTY STACK");
	else
		printf("\nPeek Element : %d",arr[top]);
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
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				push();
				break;
			case 2 :
				pop();
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
