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
	
	printf("두 수를 입력하세요."); 
	scanf("%d %d", &a, &b);
	printf("두 수의 합 : %d\n", ADD(a, b));
	printf("두 수의 곱 : %d\n", MUL(a, b));
	printf("합과 곱의 차이 : %d\n", MUL(a, b)-ADD(a, b));
}
