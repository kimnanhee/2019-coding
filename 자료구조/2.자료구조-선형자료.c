#include <stdio.h>

int main()
{
	int arr[10]={0};
	int i, input, while_cnt=10, size=10;
	
	puts("���ڸ� 10�� �Է����ּ���.\n"); // �� 10�� �Է¹ޱ�  
	for(i=0; i<10; i++)
		scanf("%d", &arr[i]);
		
	while(1)
	{	
		int j=99;
			 
		puts("������ ���� �Է����ּ���.");
		scanf("%d", &input);
			
		for(i=0; i<size; i++)
			if(input==arr[i])
				j=i;
			
		if(j==99)
		{
			puts("���ڸ� �߸� �Է��ϼ̽��ϴ�.");
			continue; 
		}
				
		for(i=j; i<size; i++)
			arr[i]=arr[i+1];
				 
		size--;
			
		if(size==0)
		{
			puts("finish");
			return 0;
		}
		
		printf("your array : "); // �迭 ����ϱ� 
		for(i=0; i<size-1; i++)
			printf("%d ", arr[i]);
		printf("\n");
		
		while_cnt--; // �ݺ� Ƚ�� ����  
	}
}
