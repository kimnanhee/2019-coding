#include <stdio.h>

int ADD(int a, int b)
{
	int add=0; 
	add=a+b;
	return add;
}
int MUL(int a, int b)
{
	int mul=0;
	mul=a*b;
	return mul;
}
int main()
{
	int a, b;
	
	printf("�� ���� �Է��ϼ���."); 
	scanf("%d %d", &a, &b);
	printf("�� ���� �� : %d\n", ADD(a, b));
	printf("�� ���� �� : %d\n", MUL(a, b));
	printf("�հ� ���� ���� : %d\n", MUL(a, b)-ADD(a, b));
}
