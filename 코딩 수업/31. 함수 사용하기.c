#include <stdio.h>
int big(int a, int b)
{
	return (a>b ? a:b);
} 

char ASC(char a)
{
	return ("%d", a);
 } 

void atoz(int c, int d)
{	int i;
	for(i=c; i<d; i++)	
		printf("%d ", i);
}

void DSM(int a)
{
	int i;
	for(i=0; i<a; i++)
		printf("DSM ");
}

float average(int a, int b, int c)
{
	int sum = a + b + c;
	float average = sum / 3;
	return average;
}

int main()
{
	int number;
	
	int a, b, c;
	while(1)
	{
		printf("��� ������ Ǫ�ðڽ��ϱ�?\n");
		scanf("%d", &number);
		
		if(number==1) 
		{
			printf("�� ������ �Է����ּ���.\n");
			int i, j;
			scanf("%d %d", &i, &j);
			printf("ū ���� %d�Դϴ�.\n", big(i, j));
		}
		else if(number==2)
		{
			printf("�ƽ�Ű�ڵ�� �ٲ� ���� �ϳ��� �Է����ּ���.\n"); 
			char a;
			scanf("%c", &a);
			printf("%d\n", ASC(a));
			 
		}
		else if(number==3)
		{
			printf("�� ������ �Է����ּ���.\n"); 
			int a, b;
			scanf("%d %d", &a, &b);
			printf("%d\n", atoz(a, b));
		}
		else if(number==4)
		{
			printf("DSM�� ��� �ݺ��ؼ� ����� ������ �� �ϳ��� �Է����ּ���.\n");
			int a;
			scanf("%d", &a);
			DSM(a)
			printf("\n");
		}
		else if(number==5)
		{
			printf("����� ����� �� ������ �Է����ּ���.\n");
			scanf("%d %d %d", &a, &b, &c);
			printf("%.2f\n", average(a, b, c));
		}
		else printf("�ٽ� ���� �ϼ���."); 
	} 
	return 0;
	
}
