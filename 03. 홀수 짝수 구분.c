//홀수와 짝수를 구분하는 프로그램
 
#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	switch(num%2)
	// switch 조건문에 단순한 정수가 아닌 수식 삽입 가능
	 
	{
		case 0:
			printf("even number!!");
			break;
			
		case 1:
			printf("odd number!!");
			break;
			
		default:
			printf("default");
			break;
	}
}
