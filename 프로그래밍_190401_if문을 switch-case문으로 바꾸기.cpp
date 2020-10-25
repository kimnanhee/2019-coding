#include <stdio.h>

/*
int main() 
//숫자 입력받아서 switch문 쓰기 
{
	int a;
	
	scanf("%d", &a);
	
	switch (a)
	{
		case 1:
		case 2:				
			printf("1또는 2입니다.\n");
			break;
			
		case 3:
		case 4:				
			printf("3또는 4입니다.\n");
			break;
		
		default:
			printf("default\n");
	}
	return 0;
}
*/


/*
int main()
//문자 입력받아서 switch문 쓰기 
{
	char a;
	
	scanf("%c", &a);
	
	switch(a)
	{
		case 'a':
			printf("a입니다.\n");
			break;
			
		case 'b':
			printf("b입니다.\n");
			break;
			
		default: printf("default\n");
	}
	return 0;
} 
*/



/*
int main()
//입력받은 문자가 소문자면 소문자라고 출력,
//대문자이면 대문자라고 출력, 영문이 아니면 아니라고 출력 
{
	char a;
	
	scanf("%c", &a);
	
	switch(a)
	{
		case 'A' ... 'Z': 
		// if문 (a >= 'A' && a <= 'Z') 
			printf("대문자입니다.");
			break; 
		
		case 'a' ... 'z': 
		// if문 (a >= 'a' && a <= 'z')
			printf("소문자입니다.");
			break; 
		
		default: printf("영문자가 아닙니다.");
	}
	return 0;
 } 
 */


/*
int main()
// 4번. 숫자 입력받아서 0, 짝수, 홀수로 구분 
{
	int a;
	
	scanf("%d", &a);
	
	if (a==0)
		printf("0");
	
	else if (a%2==0)
		printf("짝수");
		
	else  printf("홀수");
	
	return 0; 
}
*/


/*
int main()
// 아빠
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	( ( ( a < b && a < c) ? ( ( b < c ) ? ( printf(" %d %d %d ", a,b,c)) ) : ( printf(" %d %d %d ", a, c, b )) ) ) : ( ( b < a && b < c ) ? ( ( a < c ) ? ( printf(" %d %d %d "), b, a, c ) : ( printf(" %d %d %d ", b, c, a)))) )
	return 0;
}
*/
	
	

/*
int main() 
// 5번. 세 수 입력 받아서  오름차순으로 숫자 출력하기. 
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
// 7번 숫자 입력 받아서 70이상 110이하면 정상출력. 
{
	int a;
	
	scanf("%d", &a);
	
	if ((70<=a) && (a<=110))
		printf("정상.");
	
	else printf("정상이 아닙니다.");
} 
*/




/*
int main()
//  9번. 세 변의 길이를 입력 받아서 무슨 삼각형인지 출력하기. 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if((a+b>=c) && (b+c>=a) && (c+b>=a))
	{
		if(a==b==c) 
			printf("정삼각형.");
		
		else if((a==b) || (b==c) || (c==a)) 
			printf("이등변  삼각형.");
			
		else if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
			printf("직각 삼각형.");
					
		else printf("삼각형.");
	}
	
	else printf("삼각형이 아닙니다.");
}
*/





