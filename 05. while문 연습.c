#include <stdio.h>

/* 
int main()
{
	int a;
	
	scanf("%d", &a);
	
	while(a<5)
	{
		printf("%d\n");
		a = a+1;
	}
}
*/ 


/*
int main()
{
	int i, sum=0;
	
	for(i=0; i<=100; i++)
	{
		sum += i;
	}
	
	printf("1부터 100까지의 합 : %d", sum);
	
	return 0;
}
*/





int main() //입력받은 a, b의 사이에 있는 수를 모두 더하여라. 
{
	int a, b, sum;
	
	scanf("%d %d", &a, &b);
	
	for(a; a<=b; a++)
	{
		sum += a;
	}
	
	printf("%d", sum);
	
	return 0;
}

