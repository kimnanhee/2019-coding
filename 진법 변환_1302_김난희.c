#include <stdio.h>
int main() 
{
	int a, b, i, sum=0;
	char c[17], change[17]="0123456789ABCDEF";
	
	printf("입력할 수의 진법, 바꾸고 싶은 진법, 바꿀 수를 입력해주세요 : "); 
	scanf("%d %d %s", &a, &b, c); 
	
	if(a==2 || a==8 || a==10 || a==16)
		for(i=0; c[i]; i++) 
		{	
			if(c[i]>='A' && c[i]<='Z') 
				c[i] = c[i] - 'A' + 10; 
			
			else if(c[i]>='a' && c[i]<='z') 
				c[i] = c[i] - 'a' + 10;
			
			else if(c[i]>='0'&& c[i]<='9') 
				c[i] -= '0';
				
			else return 0;
			
			if(c[i]>=a) 
			{
				printf("입력한 수가 잘못되었습니다.");
				return 0;
			}
			
			sum=(sum*a)+c[i];
		}
	
	if(sum<0 || sum>65535) 
	{
		printf("입력 범위 초과");
		return 0;
	}
	
	for(i=0; sum>0; i++)
	{
		c[i]=change[sum%b]; 
		sum/=b; 
	}
	
	if(b==2 || b==8 || b==10 || b==16)
		for(i=i-1; i>=0; i--) printf("%c", c[i]);
	
	return 0;
}
