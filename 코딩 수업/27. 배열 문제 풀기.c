#include <stdio.h>

int main()
{
	int i, max=0, min=0;
	int second=0, third=0;
	
	int arr[10] = {-90, 23, -30, 20, -250, 1, 100, -52, 80, 57};
	
	printf("�״��\n");
	for(i=0; i<10; i++) // �״�� ���  
	{
		if(arr[i]>0) printf("+%d ", arr[i]);
		
		else printf("%d ", arr[i]);
	}
	////////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("��ȣ����\n");
	for(i=0; i<10; i++) // ��ȣ �ٲ㼭 ���  
	{
		if(arr[i]>0) printf("-%d ", arr[i]);
		
		else printf("+%d ", -arr[i]);
	}
	///////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("���밪\n");
	for(i=0; i<10; i++) // ���� ���  
	{
		if(arr[i]>0) printf("%d ", arr[i]);
		
		else printf("%d ", -arr[i]);
	}
	/////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("���� ū ��");
	for(i=0; i<10; i++)
	{
		if(max<arr[i]) max=arr[i];
	}
	printf("%d", max);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("���� ���� ��"); 
	for(i=0; i<10; i++)
	{
		if(min>arr[i]) min=arr[i];
	}
	printf("%d", min);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("�ι�° ū ��");
	for(i=0; i<10; i++)
	{
		if(arr[i]==max) continue;
		
		else if(second<arr[i]) second=arr[i];
	}
	printf("%d", second);
	////////////////////////////////////////////////////////
	printf("\n\n");
	
	printf("����° ū ��");
	for(i=0; i<10; i++)
	{
		if(arr[i]==max || arr[i]==second) continue;
		
		else if(third<arr[i]) third=arr[i];
	}
	printf("%d", third);
	///////////////////////////////////////////////////////
	return 0; 
}
