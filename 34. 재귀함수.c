/*
����Լ� 
����� ���踦 �Լ��� ó�� 

void func(int n)
=> ���̰� n�� �ﰢ���� �׸��� �Լ���� ����  

func(n) => ���̰� n�� �ﰢ��
func(n-1) => ���̰� n-1�� �ﰢ��

����Ż�� ����ϴ�. 

����Լ��� ���鶧 ��Ģ
- ���� ������ ����� �� 
- return ���� ��F�� ó������ ������ �� ��
*/

/*
#include <stdio.h>

void func1(int n)
{
	if(n==0) return; // �Լ��� ���� ����  
	else // �Լ��� ���  
		// ��� : �Լ��� �μ��� �״�� ����ϴ� �Լ�  
	   // ���� : 1���� �Լ��� �μ����� ���  
	{
		printf("%d\n", n);
		func1(n-1);
	}
}

int func2(int n)
{
	if(n==0) return 0; // �Լ��� ���� ����  
	else return 1+func2(n-1);
	// ��� : 1�� �����ش�. 
} 

int fact(int n)
{
	if(n<=1) return 1;
	else return n*fact(n-1);
}
 
int main()
{
	func1(10);
	printf("func2(10)=%d\n", func2(10));
	printf("fact=%d\n", fact(5));
}
*/

/*
��� �Լ��� �����

����  
�������� ���� �ذ� ������ ���� ��κ��ٴ� 
���� �ذ��� ���� �⺻���� ����(�˰���)�� �����ϸ� �ȴ�. 
 
����
�Լ� ȣ�� �� �μ��� ����, ���� ���� ������
�����ϰ� Ŀ���� �Լ� ȣ�� ���̰� ���������  
�޸� ����� �����Ѵ�.  
*/

//�Ǻ���ġ ������ n���� ��Ҹ� ���ϴ� �Լ�

#include <stdio.h>

int fibonacci(int n)
{
	if(n<=2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", fibonacci(a));  
} 







 
