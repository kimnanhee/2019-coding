#include <stdio.h>
// ���� ��(a), ���� ��(m), ���� ��(d)
// �� ��° ������ ��Ÿ���� ����(n)

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
