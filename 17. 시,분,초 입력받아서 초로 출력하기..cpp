#include <stdio.h>

/*
int main() 
// ��.��.�� �Է¹޾Ƽ� �ʷ� ����ϱ�. 
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", 3600*a+60*b+c);
	
	return 0;
}
*/

/*
int main()
//if���� ���� �ʰ� ������ Ȯ���ϴ� �ڵ� 
{
	int a;
	
	scanf("%d", &a);

	printf("%d\n", a%4==0&&a%400==0||a%100!=0); // 
	
	return 0;
} 

int main() 
//if������ ������ Ȯ���ϴ� �ڵ�  
{
	int a;
	
	scanf("%d", &a);
	
	if (a%4==0&&a%400==0||a%100!=0)
		printf("�����Դϴ�.")
		
	else printf("����Դϴ�.");
	
	return 0; 
}
*/


int main()
{
	int a;
	
	scanf("%c", &a);
	
	if(a >= 'A' && a <= 'Z')
		printf("%c", a+32);
		
	else printf("%c", a-32);
		
	return 0;
 } 







