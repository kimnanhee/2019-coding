#include <stdio.h>

int main()
{
	int a, i, j;
	char x, y;
	
	scanf("%d", &a);
	
	for(i=1; i<=a; i++) // ù��° ���� "1 22 333 4444"ó�� ���  
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", i);
		}
	printf("\n");
	}
	
	printf("\n"); // �� �ٲ�  
	 
	for(i=1; i<=a; i++) // �ι�° ���� "1 12 123 1234"ó�� ���  
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n"); // �� �ٲ�22
	
	for(x=65; x<=64+a; x++) // ����° ���� "A BB CCC DDDD"ó�� ���  
	{
		for(y=65; y<=x; y++)
		{
			printf("%c", x);
		}
	printf("\n");
	} 
	
	printf("\n");
	
	for(x=65+a; x>=65; x--) // �׹�° ���� "ABCD ABC AB A"ó�� ��� 
	{
		for(y=65; y<=x-1; y++)
		{
			printf("%c", y);
		}
		printf("\n");
	} 
	
	return 0;
}

