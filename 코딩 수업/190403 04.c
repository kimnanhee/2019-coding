#include <stdio.h>

int main()
{
	int a, i, j;
	char x, y;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++) // 첫번째 문제 "1 22 333 4444"처럼 출력  
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", i);
		}
	printf("\n");
	}
	
	printf("\n"); // 줄 바꿈  
	 
	for(i=1; i<=a; i++) // 두번째 문제 "1 12 123 1234"처럼 출력  
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n"); // 줄 바꿈22
	
	for(x=65; x<=64+a; x++) // 세번째 문제 "A BB CCC DDDD"처럼 출력  
	{
		for(y=65; y<=x; y++)
		{
			printf("%c", x);
		}
	printf("\n");
	} 
	
	printf("\n");
	
	for(x=65+a; x>=65; x--) // 네번째 문제 "ABCD ABC AB A"처럼 출력 
	{
		for(y=65; y<=x-1; y++)
		{
			printf("%c", y);
		}
		printf("\n");
	} 
	
	return 0;
}

