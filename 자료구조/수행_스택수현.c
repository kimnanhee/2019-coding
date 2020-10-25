#include <stdio.h>
#define SIZE 10

int top=-1, out=0, user;
int stack[SIZE]={0}, output[SIZE*SIZE]={0};

void push(int n)
{
	if(top>=SIZE-1) {
		printf("\nOverflow\n\n\n");
		return;
	}
	else stack[++top] = n;
}

void pop()
{
	if(top==-1) {
		printf("\nUnderflow\n\n\n\n");
		return;
	}
	else
	{
		output[out++] = stack[top--];
		return;
	}
}

void stackprint()
{
	int i;
	printf("---------------------------------\n");
	
	printf("STACK [");
	for(i=0; i<=top; i++)
		printf("%d ", stack[i]);
	printf("]\n");
	
	printf("\noutput : ");
	for(i=0; i<out; i++)
		printf("%d ", output[i]);
		
	printf("\n\n");
}
int main()
{
	printf("-------------------------------------------\n");
	printf("       ���ÿ� ���� ���� �Է����ּ���       \n");
	printf("     ���α׷� ���� : 8888, pop : 9999        \n");
	printf("-------------------------------------------\n");
	 
	while(1)
	{ 
		scanf("%d", &user);
		
		if(user==8888) 
		{
			printf("\n\n���α׷�����"); 
			return 0;
		}
		
		else if(user==9999)
		{
			pop();
			stackprint();
		} 
		
		else 
		{
			push(user);
			stackprint();
		}
	}
}
