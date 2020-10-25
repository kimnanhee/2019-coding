#include <stdio.h> 
// 숫자를 입력받아서 /2, /5, -1만을 사용해서  
// 1로 만드는 최단 경로를 출력하기

int main()
{
	int a, count=0;
	
	scanf("%d", &a);
	
	while(1)
	{
		if(a%5==0) 
		{
			a/=5;
			count++;
			
		}
		
		else if((a-2)%5==0&&a%2!=0)
		{
			a-=2;
			count+=2;
		}
		
		else if(a%2==0)
		{
			a/=2;
			count++;
		}
		
		else
		{
			a--;
			count++;
		}
		
		if(a==1) break;
	}
	printf("%d", count);
}
