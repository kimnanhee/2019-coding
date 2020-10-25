#include <stdio.h>

int main()
{
	int i, max=0, min=0;
	int second=0, third=0;
	
	int arr[10] = {-90, 23, -30, 20, -250, 1, 100, -52, 80, 57};
	
	printf("그대로\n");
	for(i=0; i<10; i++) // 그대로 출력  
	{
		if(arr[i]>0) printf("+%d ", arr[i]);
		
		else printf("%d ", arr[i]);
	}
	////////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("부호반전\n");
	for(i=0; i<10; i++) // 부호 바꿔서 출력  
	{
		if(arr[i]>0) printf("-%d ", arr[i]);
		
		else printf("+%d ", -arr[i]);
	}
	///////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("절대값\n");
	for(i=0; i<10; i++) // 절댓값 출력  
	{
		if(arr[i]>0) printf("%d ", arr[i]);
		
		else printf("%d ", -arr[i]);
	}
	/////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("가장 큰 수");
	for(i=0; i<10; i++)
	{
		if(max<arr[i]) max=arr[i];
	}
	printf("%d", max);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("가장 작은 수"); 
	for(i=0; i<10; i++)
	{
		if(min>arr[i]) min=arr[i];
	}
	printf("%d", min);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("두번째 큰 값");
	for(i=0; i<10; i++)
	{
		if(arr[i]==max) continue;
		
		else if(second<arr[i]) second=arr[i];
	}
	printf("%d", second);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("세번째 큰 값");
	for(i=0; i<10; i++)
	{
		if(arr[i]==max || arr[i]==second) continue;
		
		else if(third<arr[i]) third=arr[i];
	}
	printf("%d", third);
	///////////////////////////////////////////////////////
	return 0; 
}
