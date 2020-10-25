//switch-case 구조로 계산기 만들기. 
#include <stdio.h>

int main()
{
	char ch;
	int a, b;
	
	printf("수식을 입력하시오 :\n");
	scanf("%d %c %d", &a, &ch, &b);
	
	
	/* printf("숫자 한개를 입력하시오: ");
	scanf("%d", &a);
	 
	printf("어떤 연산을 할 것인지 입력하시오 : (+/-)";)
	scanf(" %c", &ch);
	
	printf("다른 숫자 한 개를 입력하시오 : ");
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
			printf("다시 시작하세요. \n");
			
	}
	return 0; 
}
