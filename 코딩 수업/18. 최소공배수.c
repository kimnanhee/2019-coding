#include <stdio.h>

int main()
{
	int a, b, c;
	int i;
	
	scanf("%d %d %d", &a, &b, &c);
	
	for(i=1; i<=1000000; i++)
	{
		if(i%a==0 && i%b==0 && i%c==0)
		{
		printf("%d", i);
		break;
		}
	}
	return 0;
}
