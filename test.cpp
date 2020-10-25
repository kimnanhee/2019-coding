#include <stdio.h>

int main()
// 두 수를 입력받은 후 두 수의 합을 구하는 코드  
{
	int a, b;
	int i, j;
	int sum1=0, sum2=0;
	
	scanf("%d %d");
	
	if(a>b) 
	{
	for(i=b; i<=a; i++)
	{
		sum1+=i;
	}
	printf("%d", sum1);
	}
	
	else
	{
	for(j=a; j<=b; j++)
	{
		sum2+=j;
	}
	printf("%d", sum2);
	}
	
	return 0;
}


