#include <stdio.h>

main()
{
	int a, d, n; //시작 값a, 등차의 값d, 몇 번째 인지 나타내는 정수n
	int i;
	
	scanf("%d %d %d", &a, &d, &n);
	
	for(i=n; i>1; i--)
	{
		a+=d;
	}
	printf("%d", a);
}
