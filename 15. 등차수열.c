#include <stdio.h>

main()
{
	int a, d, n; //���� ��a, ������ ��d, �� ��° ���� ��Ÿ���� ����n
	int i;
	
	scanf("%d %d %d", &a, &d, &n);
	
	for(i=n; i>1; i--)
	{
		a+=d;
	}
	printf("%d", a);
}
