#include <stdio.h>
// ���� ��(a), ����� ��(r), �� ��° ������ ��Ÿ���� ����(n)�� �Էµ� �� 
// n��° ���� ����ϴ� ���α׷�

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
