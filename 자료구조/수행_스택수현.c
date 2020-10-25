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
	printf("       스택에 넣을 값을 입력해주세요       \n");
	printf("     프로그램 종료 : 8888, pop : 9999        \n");
	printf("-------------------------------------------\n");
	 
	while(1)
	{ 
		scanf("%d", &user);
		
		if(user==8888) 
		{
			printf("\n\n프로그램종료"); 
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
