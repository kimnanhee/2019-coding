#include <stdio.h>

int main()
{
	int a, i;
	int arr[10] = {0};
	
	printf("10���� ���� ������ �Է��ϼ���.\n");
		
		for(i=0; i<10; i++)
		{
			scanf("%d", &arr[i]); 
		}
	////////////////////////////////////////////////////
	while(1)
	{
		printf("������ ���� �Է��Ͻÿ�.\n");
		
		scanf("%d", &a);
		
		if(a==0) break;
		
		else 
		{
			for(i=0; i<10; i++)
				if(a==arr[i]) arr[i]=0;
		}
	}
	////////////////////////////////////////////////////
	for(i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
} 
