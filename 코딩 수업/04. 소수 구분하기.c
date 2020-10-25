#include <stdio.h>

int main
{
	int num;
	
	scanf("%d", &num);
	
	switch(num)
	{
		case 2:
		case 3:
		case 5:
		case 7:
		case 11:
			
		//case 명령문에 넣는 선택 사항이며
		//명령문과 break문을 넣지 않으면 아래로 내려가면서 조건이 적용
		
			printf("prime number!!");
			break;
		default:
			printf("소수가 아닐수도!!");
	}
	return 0;
 } 
