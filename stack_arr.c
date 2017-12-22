#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void push(int);
int pop();
void display();

int top=-1,stack[MAX],x;
int main(void)
	{
        printf("\n\n\n***********welcome to stack operation*****************\n");
	int choice,ele;
	do
	{
		printf("\nEnter your choice:\n");
		printf("\t1. PUSH\n");
		printf("\t2. POP\n");
		printf("\t3. DISPLAY\n");
		printf("\t4. EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				printf("PUSH OPERATION:\n");
				printf("please enter a number add to stack:\n");
				scanf("%d",&ele);
				push(ele);
				break;
				}
			case 2:
				{
				printf("POP OPERATION:\n");
				x=pop();
				printf("popped element is %d\n",x);
				break;			
				}
			case 3:
				{
				display();
				break;			
				}
			case 4:
				exit(0);		
			default:	
				printf("U entered wrong choice,please tryagain\n");			
		}
	}while(choice != 4);
	return 0;	
}

void push(int ele)
{
	if(top==MAX-1)
	{
		printf("\nStack overflow\n\n");
	}
	else
	{
		top++;
		stack[top] =ele;
	}
}

int pop()
{
	if(top==-1)
	{
		printf("\nStack underflow\n\n");
	}
	else
	{
		x=stack[top];
		top--;
	}
	return x;
}
void display()
{
	int i;
	if(top==-1)
		printf("\nNo elements in the stack\n");
	else{
	for(i=top;i>=0;i--)
		printf("\nstack element at position %d is %d\n",i,stack[i]);
	
	}
}
