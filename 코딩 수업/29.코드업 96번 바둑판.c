#include <stdio.h>

int main()
{
	int a, i, x, y;
	int arr[20][20]={0};
	
	scanf("%d", &a);
	for(i=0; i<a; i++)
	{
		scanf("%d %d", &x, &y);
		arr[x][y]=1;
	}
	for(x=1; x<20; x++)
	{
		for(y=1; y<20; y++)
			printf("%d ", arr[x][y]);
		printf("\n");
		
	}
	return 0;
}
