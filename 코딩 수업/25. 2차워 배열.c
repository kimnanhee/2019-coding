#include <stdio.h>

/*
int main()
// 입력받은 것을 그대로 출력 
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
// 입력한 숫자의 개수를 확인하기  
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
	
	// 입력받은 것을 배열에 저장하고 고대로 출력  
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
	
	// 위의 두 단을 하나로 묶은 코드  
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









 
