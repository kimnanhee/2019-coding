#include <stdio.h>

int main()
// �Է��� ������ ������ Ȯ���ϱ�  
{
	int i, n, t, arr[20]={0};
	
	printf("n : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &t);
		arr[t]++;
	}
	printf("\n");
	
	for(i=1; i<=n; i++)
		printf("%d", i);
	
	printf("\n");
	
	for(i=1; i<=n; i++)
		printf("%d", arr[i]);
	
	return 0;
}
