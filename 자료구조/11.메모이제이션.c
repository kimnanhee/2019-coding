// �޸������̼�
// ��� ����� �޸𸮿� �����ϰ� �ҷ����� ����

#include <stdio.h>

long long int memo[201];

long long int f(int n)
{
	if(memo[n]) return memo[n];
	if(n<=2) return 1;
	memo[n] = f(n-1) + f(n-2);
	return memo[n];
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", f(a)%10009);
	return 0;
}
