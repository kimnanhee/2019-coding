//switch-case ������ ���� �����. 
#include <stdio.h>

int main()
{
	char ch;
	int a, b;
	
	printf("������ �Է��Ͻÿ� :\n");
	scanf("%d %c %d", &a, &ch, &b);
	
	
	/* printf("���� �Ѱ��� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	 
	printf("� ������ �� ������ �Է��Ͻÿ� : (+/-)";)
	scanf(" %c", &ch);
	
	printf("�ٸ� ���� �� ���� �Է��Ͻÿ� : ");
	scanf("%d", &b) 
	*/
	
	
	switch(ch)
	{
		case '+':
			printf("%d\n", a+b);
			break;
			
		case '-':
			printf("%d\n", a-b);
			break;
			
		case '*':
			printf("%d\n", a*b);
			break;
			
		case '/':
			printf("%d\n", a/b);
			break;
			
			case '%':
			printf("%d\n", a%b);
			break;
			
		default:
			printf("�ٽ� �����ϼ���. \n");
			
	}
	return 0; 
}
