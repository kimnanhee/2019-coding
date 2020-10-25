#include <stdio.h>


int main()
{
	int n=1;
	switch(n)
	{
		case 1: 
			printf("안녕하세요 \n");
		
		
		case 2: 
			printf("감사합니다 \n");
			break;
			
			
		default : //case에 해당되지 않은 판단값에 따른 명령문 
			printf("마지막 \n");
	}
	return 0;
}
