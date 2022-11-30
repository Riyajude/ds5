#include <stdio.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1;

void push(int data)
{
	if (rear==MAX-1)
	{
		printf("\nQueue overflow\n");
	}
	else if (rear ==-1)
	{ 
		front=0;
		rear=0;
		queue[rear]=data;
	}
	else
	{
		queue[++rear]=data;
	}
}

void pop()
{
	int del;
	if (front==-1)
	{
	printf("\nQueue empty\n");
	}
	else if (front==rear)
	{
		printf("\nDeleted element is %d\n",queue[front]);
		front=-1;
		rear=-1;
	} 
	else
	{
		del=queue[front++];
		printf("\nDeleted element is %d\n",del);
	}
}

int peek()
{
	if (front==-1)
		return -1;
	else
		return queue[front];
}

void display()
{
	if (front==-1)
		printf("\nQueue empty\n");
	else
		{
		printf("\n");
		for(int i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
		printf("\n");
		}	
			
}
int main()
{
	int ch, element;
	printf("\n---------Menu---------");
	printf("\n1.Push element");
	printf("\n2.Pop element");
	printf("\n3.Display queue");
	printf("\n4.Display Front Element");
	printf("\n5.Exit\n");
	do
	{
	
	printf("\nEnter choice:\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	printf("\nEnter element to insert ");
	scanf("%d", &element);
	printf("\n");
	push(element);
	break;
	case 2:
	pop();

	break;
	case 3:
	display();
	break;
	case 4:
	if(front == -1)
	{
	printf("\nQueue empty!\n");
	}
	else
	{
	printf("\nFront element: %d\n", peek());
	}
	break;
	}
	} while (ch < 5);
	return 0;
}
