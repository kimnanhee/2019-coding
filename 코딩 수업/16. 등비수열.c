#include <stdio.h>
// 시작 값(a), 등비의 값(r), 몇 번째 인지를 나타내는 정수(n)가 입력될 때 
// n번째 수를 출력하는 프로그램

main()
{
	int a, r, n;
	int i;
	
	scanf("%d %d %d", &a, &r, &n);
	
	for(i=n; i>1; i--)
	{
		a=a*r;
	}
	printf("%d", a);
}
