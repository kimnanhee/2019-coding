#include <stdio.h>
#include <string.h>
#define SWAP(x, y) {int tmp; tmp=x; x=y; y=tmp;}
#define SIZE 5

void bubble(int arr[])
{
	int i, j;
	for(i=0; i<SIZE-1; i++)
	{
		for(j=0; j<SIZE-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				SWAP(arr[j], arr[j+1]);
			}
		}
		printf("%d��° ", i+1);
		print(arr);
	}
	return;
}

void select(int arr[])
{
	int i, j, min;
	for(i=0; i<SIZE-1; i++)
	{
		min=i;
		for(j=i+1; j<SIZE; j++)
			if(arr[min]>arr[j]) min=j; // �ּڰ� ã�� 
		
		SWAP(arr[i], arr[min]);
		
		printf("%d��° ", i+1); 
		print(arr);
	}
	return;
}

void insert(int arr[])
{
	int i, j, key;
	for(i=1; i<SIZE; i++) // �ε��� 0�� ������ �Ǿ��ִ�. 
	{
		key=arr[i]; // ������ ������ ���� 
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		printf("%d��° ", i);
		print(arr);
	}
}

void quick(int arr[], int left, int right)
{
	if(left<right)
	{
		print(arr);
		int p = partition(arr, left, right);
		quick(arr, left, p-1);
		quick(arr, p+1, right);
	}
}

int partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l-1, j;
	for(j=l; j<=r-1; j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			SWAP(arr[i], arr[j]);
			print(arr);
		}
	}
	SWAP(arr[i+1], arr[r]);
	return i+1;
}

void print(int arr[])
{
	int i;
	for(i=0; i<SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

int main()
{
	printf("%d\n", 3<<2);
	int arr1[10]={80, 20, 60, 50, 40};
	int arr2[10]={80, 20, 60, 50, 40};
	int arr3[10]={80, 20, 60, 50, 40};
	int arr4[10]={80, 20, 60, 50, 40};
		
	printf("\n����\n");
	bubble(arr1);
	
	printf("\n����\n");
	select(arr2);
	
	printf("\n����\n");
	insert(arr3); 
	
	printf("\n��\n");
	quick(arr4, 0, 4);
	
	return 0;
}
