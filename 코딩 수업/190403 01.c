#include <stdio.h>

int main()
{
	int a, i;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i+=2)
	printf("%d\n", i*i);
	
	return 0;
} 
