#include <stdio.h>
// 시작 값(a), 곱할 값(m), 더할 값(d)
// 몇 번째 인지를 나타내는 정수(n)

int main()
{
	int a, m, d, n;
	int i;
	
	scanf("%d %d %d %d", &a, &m, &d, &n);
	
	for(i=1; i<n; i++)
	{
		a=a*m;
		a+=d;
	}
	printf("%d", a);
	
	return 0;
}
