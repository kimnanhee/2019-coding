#include <stdio.h>

int main()
{
	int arr[10]={0};
	int i, input, while_cnt=10, size=10;
	
	puts("숫자를 10개 입력해주세요.\n"); // 수 10개 입력받기  
	for(i=0; i<10; i++)
		scanf("%d", &arr[i]);
		
	while(1)
	{	
		int j=99;
			 
		puts("삭제할 수를 입력해주세요.");
		scanf("%d", &input);
			
		for(i=0; i<size; i++)
			if(input==arr[i])
				j=i;
			
		if(j==99)
		{
			puts("숫자를 잘못 입력하셨습니다.");
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
		
		printf("your array : "); // 배열 출력하기 
		for(i=0; i<size-1; i++)
			printf("%d ", arr[i]);
		printf("\n");
		
		while_cnt--; // 반복 횟수 감소  
	}
}
