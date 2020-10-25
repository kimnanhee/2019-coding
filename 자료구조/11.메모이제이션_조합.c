#include <stdio.h>

long long int memo[10001][10001];

long long int f(int a, int b)
{
	if(memo[a][b]) return memo[a][b];
	else if(b==0 || a==b) return 1;
	else return memo[a][b] = f(a-1, b)+f(a-1, b-1);
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("f(%d, %d) : %lld", a, b, f(a, b));
	return 0;
}
