//	switch-case조건문 범위 지정  
#include <stdio.h>

int main()
{
	int value;
	
	printf("100 미만의 자연수를 입력하세요 : \n");
	scanf("%d", &value);
	switch(value)
	{
		case 0 ... 50:
			printf("50이하입니다."); //	 a ... b는 a부터 b까지의 수를 의미한다. 
			break; 
			
		case 51 ... 99:
			 printf("50이상입니다.");
			 break;
			 
		default : 
			printf("잘못 입력하였습니다.");
	}
	return 0;
} 
