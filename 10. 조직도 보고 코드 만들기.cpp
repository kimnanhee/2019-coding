#include <stdio.h>

/*
int main() 
{
	//	������ ���� �ڵ� ���� <<�� ����Ʈ ����
	//	<<�� 2�� ���ϰ�, >>�� 2�� ������. 
	int x=3, y=5, z=192, n;
	
	scanf("%d", &n);
	
	if(n>10)
		printf("%d", x<<n);
	
	else if(11>n>5)
		printf("%d", y + y<<n);
		
	else printf("%d", z / (2^n));
	
	return 0;
}
*/

/*
int main()
{

	//	����Ʈ �����ϱ�  
	int a=1, b=2, c=3; 
	
	printf("a<<2 %d\n", a<<2);
	printf("b<<2 %d\n", b<<2);
	printf("c<<2 %d\n", c<<2);
	printf("a<<3 %d\n", a<<3);
	printf("b<<4 %d\n", b<<4);
	
	return 0;
}
*/

int main()
{
	int a, b;
	char c;
	
	printf("���� �ϳ��� �Է��ϼ���. : ");
	
	scanf("%d", &a);
	
	switch(a)
	{
		case 0 ... 9: printf("0~9�Դϴ�.");
		break; 
			
		case 10 ... 19: printf("10~19�Դϴ�.");
		break;
			
		case 20 ... 29: printf("20~29�Դϴ�.");
		break;
			
		default: printf("30 �̸��� ���� �Է��Ͻÿ�.");
	}
	
	scanf("%d", &b);
	
	if (a==b) 
		printf("�����Դϴ�.");
	
	else 
	{
	printf("Ʋ�Ƚ��ϴ�.\n");
	
	printf("�ٽ��Ͻðڽ��ϱ�? (Y/N)\n");
	
	scanf("%c", &c);
	
	if (c==Y) 
	{
		if (a%2==0) 
		printf("¦���Դϴ�.");
	
		else printf("Ȧ���Դϴ�.");
	
	}
	
	else printf("��...")
	
	}
	
	return 0;
}
