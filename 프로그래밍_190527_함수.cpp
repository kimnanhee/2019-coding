#include <stdio.h>
/*
int add(int a, int b) // �� �� ���ϱ�  
{
	return a+b;
}
int main()
{
	int re=0;
	re=add(2, 3);
	printf("re:%d", re);
}
*/
/*
float add(float *a, float *b) // �ּҰ��� �ִ� ������ �ٲٱ�  
{
	return *a+*b;
}
int main()
{
	float a, b, re;
	scanf("%f %f", &a, &b);
	re=add(&a, &b);
	printf("re:%.2f", re);
}
*/
/*
int calculatesum(int begin, int end) // �Է¹��� �� �� ������ ���� ���ؼ� ��ȯ  
{
	int i, sum=0;
	for(i=begin; i<=end; i++)
		sum+=i;
	return sum;
} 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("�� �� ������ ����:%d", calculatesum(a, b));
}
*/
/*
float sum(float a, float b) // ū ���� ��ȯ�ϴ� �Լ�  
{
	float big=(a>b ? a:b);
	return big;
}
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("big=%f", sum(a, b));
}
*/
/*
int prime(int a) // Ȧ���϶��� 0�� ��ȯ, �ƴҶ��� 1����ȯ
{
	if(a%2==1) return 0;
	else return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", prime(a));
}  
*/
/*
int prime(int a) // �Ҽ� ���ϱ�, 1~100������ �Ҽ� ����  
{
	int j;
	for(j=2; j<a; j++)
		if(a%j==0) return 0;
	return 1;
}
int main()
{
	int i, count=0;
	for(i=2; i<100; i++)
	
	if(prime(i))
	{
		count++;
		printf("%d ", i);
	}
	printf("%d", count);
} 
*/
/*
int small(int a, int b) // �ּ� ������� ���ϴ� �ڵ� 
{
	int i;
	for(i=1; i<999; i++)
	{
		if(i%a==0 && i%b==0)
		return i;
	}
}
int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", small(a, b));
	
	return 0;
}
*/
/*
int big(int a, int b) // �ִ� ������� ���ϴ� �Լ�  
{
	int i;
	for(i=999; i>=1; i--)
	{
		if(a%i==0 && b%i==0)
		return i;
	}
} 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", big(a, b));
	return 0;
}
*/
/*
void swap(int a, int b) // �� �Ǽ��� �ٲ㼭 ��ȯ�ϴ� �ڵ�  
{
	int tmp;
	printf("a=%d b=%d\n", a, b);
	tmp=a;
	a=b;
	b=tmp;
	printf("a=%d b=%d", a, b);
}
int main()
{
	int a, b, tmp;
	scanf("%d %d", &a, &b);
	swap(a, b);
	return 0;
}
*/
/*
void swap(int *a, int *b) // �Լ��� ���� �Ŀ��� �ٲ� ������ �����Ǵ� �ڵ�  
{
	int tmp;
	
	tmp=*a; // tmp�� a�� �ּ� ����  
	*a=*b; // a�� �ּҿ� b�� �ּ� ����  
	*b=tmp; // b�� �ּҿ� tmp�� �ּ� ����  
}
int main()
{
	int a, b; // ������ ���� 
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
}
*/


































