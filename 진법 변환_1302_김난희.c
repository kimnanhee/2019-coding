#include <stdio.h>
int main() 
{
	int a, b, i, sum=0;
	char c[17], change[17]="0123456789ABCDEF";
	
	printf("�Է��� ���� ����, �ٲٰ� ���� ����, �ٲ� ���� �Է����ּ��� : "); 
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
				printf("�Է��� ���� �߸��Ǿ����ϴ�.");
				return 0;
			}
			
			sum=(sum*a)+c[i];
		}
	
	if(sum<0 || sum>65535) 
	{
		printf("�Է� ���� �ʰ�");
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
