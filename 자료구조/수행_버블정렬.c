#include <stdio.h>
int arr[20] = {15, 5, 9, 20, 1, 4, 7, 11, 8, 10};

void print()
{
	int i; 
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int i, j, temp;
	for(i=0; i<10-1; i++)
	{
		for(j=0; j<10-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\n[pass %d] : ", i+1);
		print();
	}
	return 0;
} 
