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
	int i, j, min, memory=0, temp;
	
	for(i=0; i<10; i++)
	{
		min=arr[i];
		for(j=i; j<10; j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				memory=j;
			}
		}
		temp=arr[memory];
		arr[memory]=arr[i];
		arr[i]=temp;
		
		printf("\n[pass %d] : ", i+1);
		print();
	}
	return 0;
}
