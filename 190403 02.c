#include <stdio.h>

int main()
{
	int a, i, j;
	
	scanf("%d", &a);
	
	
	for(i=1; i<=a; i++)
	{
		printf("%d", i);
		
		for(j=1; j<=i; j++)	
		{	
			printf("*", j); 
		}
		printf("\n");
	}
	
	return 0;
}
