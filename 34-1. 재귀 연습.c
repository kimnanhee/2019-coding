#include <stdio.h>

void printstar(int a)
{
	if (a==0) return;
	else 
	{
		printf("*\n");
		printstar(a-1);
	}
}

int main()
{
	int num;
	
	scanf("%d", &num);
	printstar(num);
}
