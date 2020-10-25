#include <stdio.h>

int main()
{
	int i=1, j=1;
	
	while(i<=10)
	{
		j=1;
		
		while(j<=i)
		{
			printf("[i]:%d [j]:%d\n", i, j);
			j++;
		}
		i++;
	}
	return 0;
 } 
