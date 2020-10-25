#include <stdio.h>

int main()
{
	int num=0;
	int a=2;
	
	printf("정수를 입력하셍 : ");
	scanf("%d", &num);
	
	while( a < num ) {
		if( num % a == 0 ) {
			printf("입력한 수 %d 는 %d 로 나누어짐으로 소수가 아닙니다.", num, a );
			return 0;
		}
		a++;
	}
	printf("입력한 수 %d 는 나누어지지 않음으로 소수입니다", num);
	return 0;
}
