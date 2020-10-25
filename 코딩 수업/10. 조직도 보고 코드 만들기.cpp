#include <stdio.h>

/*
int main() 
{
	//	조직도 보고 코드 적기 <<는 쉬프트 연산
	//	<<면 2를 곱하고, >>면 2로 나눈다. 
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

	//	쉬프트 연산하기  
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
	
	printf("숫자 하나를 입력하세요. : ");
	
	scanf("%d", &a);
	
	switch(a)
	{
		case 0 ... 9: printf("0~9입니다.");
		break; 
			
		case 10 ... 19: printf("10~19입니다.");
		break;
			
		case 20 ... 29: printf("20~29입니다.");
		break;
			
		default: printf("30 미만의 수를 입력하시오.");
	}
	
	scanf("%d", &b);
	
	if (a==b) 
		printf("정답입니다.");
	
	else 
	{
	printf("틀렸습니다.\n");
	
	printf("다시하시겠습니까? (Y/N)\n");
	
	scanf("%c", &c);
	
	if (c==Y) 
	{
		if (a%2==0) 
		printf("짝수입니다.");
	
		else printf("홀수입니다.");
	
	}
	
	else printf("네...")
	
	}
	
	return 0;
}
