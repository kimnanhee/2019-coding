#include <stdio.h>

/*
int main()
// 두 수를 입력받은 후 두 수의 합을 구하는 코드  
{
	int a, b;
	int i, j;
	int sum1=0, sum2=0;
	
	scanf("%d %d", &a, &b);
	
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
*/


/*
int main()
// 두 개의 양의 정수 입력 받아서 공약수의 합을 계산하는 코드  
{
	int a, b;
	int i, j;
	int sum=0;
	
	scanf("%d %d", &a, &b);
	
	if(a>b)
	{
	for(i=1; i<=b; i++)
		if(a%i==0 && b%i==0)
		{
			printf("%d ", i);
			sum+=i;
		}
		printf("\n%d", sum);
	}
	
	else 
	{
		for(j=1; j<=a; j++)
		if(a%j==0 && b%j==0)
		{
			printf("%d ", j);
			sum+=j;
		}
		printf("\n%d", sum);
	}
	
	return 0;
}
*/


/*
int main()
// 입력받은 수의 약수를 찾아서 출력  
{
	int a;
	int i, j;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=a; j++)
		{
			if(i*j==a) printf("(%d %d) ", i, j);
		}
	}
	return 0;
} 
*/


/*
int main()
// 피라미드 별찍기  
{
	int a, i, j;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=a*2-1; j++)
		{
			if(j<=a-i || j>=a+i)
			printf(" ");
			
			else printf("*");
		}
		printf("\n");
	}
	return 0;
} 
*/


/*
int main()
// 피라미드 별찍기-2 
{
	int a, i, j;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		for(j=1; j<a+i; j++)
		{
			if(j<=a-i)
			printf(" ");
			
			else printf("*");
		}
		printf("\n");
	}
	return 0;
} 
*/


/*
int main()
// 소수구하기  
{
	int a;
	int i=2;
	
	for(a=1; a<=1000; a++)
	{
		for(i=2; i<a; i++)
		{
			if(a%i!=0)
			{
			printf("%d\n", a); 
			}
		}
	}
	return 0;
}
*/
