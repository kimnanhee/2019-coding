#include <stdio.h> 
// ���ڸ� �Է¹޾Ƽ� /2, /5, -1���� ����ؼ�  
// 1�� ����� �ִ� ��θ� ����ϱ�

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
