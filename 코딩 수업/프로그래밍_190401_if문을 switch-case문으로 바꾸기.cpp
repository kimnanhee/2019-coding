#include <stdio.h>

/*
int main() 
//���� �Է¹޾Ƽ� switch�� ���� 
{
	int a;
	
	scanf("%d", &a);
	
	switch (a)
	{
		case 1:
		case 2:				
			printf("1�Ǵ� 2�Դϴ�.\n");
			break;
			
		case 3:
		case 4:				
			printf("3�Ǵ� 4�Դϴ�.\n");
			break;
		
		default:
			printf("default\n");
	}
	return 0;
}
*/


/*
int main()
//���� �Է¹޾Ƽ� switch�� ���� 
{
	char a;
	
	scanf("%c", &a);
	
	switch(a)
	{
		case 'a':
			printf("a�Դϴ�.\n");
			break;
			
		case 'b':
			printf("b�Դϴ�.\n");
			break;
			
		default: printf("default\n");
	}
	return 0;
} 
*/



/*
int main()
//�Է¹��� ���ڰ� �ҹ��ڸ� �ҹ��ڶ�� ���,
//�빮���̸� �빮�ڶ�� ���, ������ �ƴϸ� �ƴ϶�� ��� 
{
	char a;
	
	scanf("%c", &a);
	
	switch(a)
	{
		case 'A' ... 'Z': 
		// if�� (a >= 'A' && a <= 'Z') 
			printf("�빮���Դϴ�.");
			break; 
		
		case 'a' ... 'z': 
		// if�� (a >= 'a' && a <= 'z')
			printf("�ҹ����Դϴ�.");
			break; 
		
		default: printf("�����ڰ� �ƴմϴ�.");
	}
	return 0;
 } 
 */


/*
int main()
// 4��. ���� �Է¹޾Ƽ� 0, ¦��, Ȧ���� ���� 
{
	int a;
	
	scanf("%d", &a);
	
	if (a==0)
		printf("0");
	
	else if (a%2==0)
		printf("¦��");
		
	else  printf("Ȧ��");
	
	return 0; 
}
*/


/*
int main()
// �ƺ�
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	( ( ( a < b && a < c) ? ( ( b < c ) ? ( printf(" %d %d %d ", a,b,c)) ) : ( printf(" %d %d %d ", a, c, b )) ) ) : ( ( b < a && b < c ) ? ( ( a < c ) ? ( printf(" %d %d %d "), b, a, c ) : ( printf(" %d %d %d ", b, c, a)))) )
	return 0;
}
*/
	
	

/*
int main() 
// 5��. �� �� �Է� �޾Ƽ�  ������������ ���� ����ϱ�. 
{
 	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<=b)
	
	{
		if(a<=c)
		{
			if(c<=b) 
				printf("%d %d %d", a, c, b);
				
			else printf("%d %d %d", a, b, c);
		}
		
		else printf("%d %d %d", c, a, b);
	}
		
	else 
	{
		if()
	}
	
	return 0;
} 
*/


/*
int main()
// 7�� ���� �Է� �޾Ƽ� 70�̻� 110���ϸ� �������. 
{
	int a;
	
	scanf("%d", &a);
	
	if ((70<=a) && (a<=110))
		printf("����.");
	
	else printf("������ �ƴմϴ�.");
} 
*/




/*
int main()
//  9��. �� ���� ���̸� �Է� �޾Ƽ� ���� �ﰢ������ ����ϱ�. 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if((a+b>=c) && (b+c>=a) && (c+b>=a))
	{
		if(a==b==c) 
			printf("���ﰢ��.");
		
		else if((a==b) || (b==c) || (c==a)) 
			printf("�̵  �ﰢ��.");
			
		else if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
			printf("���� �ﰢ��.");
					
		else printf("�ﰢ��.");
	}
	
	else printf("�ﰢ���� �ƴմϴ�.");
}
*/





