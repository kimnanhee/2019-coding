#include <stdio.h>

int main()
{
	int i, seek, arr[] = {23, 42, 52, 12, 5, 19, 100, 33, 54, 2};
	
	int size_nan = sizeof(arr)/sizeof(int);
	 
	
	scanf("%d", &seek);
	
	for(i=0; i<size_nan; i++)
	{
		if (arr[i] == seek)
		{
			printf("%d�� %d��° �����Դϴ�.\n", seek, i+1);
			return 0;
		}
	}
	printf("ã�� ���ڰ� �����ϴ�.");
	return 0;
 } 
