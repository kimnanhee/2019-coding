#include <stdio.h>

int main()
// while문으로 찍기  
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





 #include <stdio.h>

int main()
// for문으로 찍기  
{
	int i=1, j=1;
	
	for(i=1; i<=10; i++)
	{
		j=1;
		
		for(j=1; j<=i; j++)
		{
			printf("[i]:%d [j]:%d\n", i, j);
		}
	}
	return 0;
 } 
