#include <stdio.h>

int main()
{
	int a, i;
	int arr[10] = {0};
	
	printf("10개의 양의 정수를 입력하세요.\n");
		
		for(i=0; i<10; i++)
		{
			scanf("%d", &arr[i]); 
		}
	////////////////////////////////////////////////////
	while(1)
	{
		printf("삭제할 수를 입력하시오.\n");
		
		scanf("%d", &a);
		
		if(a==0) 
		{
			printf("끝");
			break;
		}
		
		else 
		{
			for(i=0; i<10; i++)
				if(a==arr[i]) arr[i]=0;
		}
		
		for(i=0; i<10; i++)
			{
				if(arr[i]!=0) printf("%d ", arr[i]);
			}
		printf("\n");
		}
	////////////////////////////////////////////////////
	for(i=0; i<10; i++)
	{
		printf("%d ", arr[i]);	
	}
	return 0;
} 
