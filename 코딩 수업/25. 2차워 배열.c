#include <stdio.h>

/*
int main()
// �Է¹��� ���� �״�� ��� 
{
	int i, n, arr[100];
	
	printf("n : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<n; i++)
		printf("%d", arr[i]);
		
	return 0;
}
*/

/*
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
*/

int main()
{
	int i, j;
	int arr1[2][3] = {1, 2, 3, 4, 5, 6};
	int arr2[2][3], arr3[2][3];
	
//	for(i=0; i<2; i++)
//	{
//		for(j=0; j<3; j++)
//			printf("%d", arr1[i][j]);
//		printf("\n");
//	}
	
	printf("\n");
	
	// �Է¹��� ���� �迭�� �����ϰ� ���� ���  
	printf("insert value on arr2\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d", &arr2[i][j]);
	}
	
	printf("\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("%d ", arr2[i][j]);
			printf("\n");
	}
		 
		
	printf("\n");
	
	// ���� �� ���� �ϳ��� ���� �ڵ�  
	/*
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &arr3[i][j]);
			printf("%d", arr3[i][j]);
		}
		printf("\n");
	}
	*/
	
	return 0;
}









 
