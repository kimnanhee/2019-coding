#include <stdio.h>

int main()
{
	int a, i, j, tmp=0;
	int arr[100001]={0};
	
	scanf("%d", &a);
	
	for(i=0; i<a; i++)
		scanf("%d", &arr[i]);
		
	for(j=0; j<a; j++)
	{
		for(i=0; i<a-1-j; i++)
			if(arr[i]>arr[i+1])
			{
				tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
	}
		
	for(i=0; i<a; i++)
		printf("%d\n", arr[i]);
		
	return 0;
}
