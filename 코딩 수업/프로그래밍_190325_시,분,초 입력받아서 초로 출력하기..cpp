#include <stdio.h>

/*
int main() 
// 시.분.초 입력받아서 초로 출력하기. 
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", 3600*a+60*b+c);
	
	return 0;
}
*/

/*
int main()
//if문을 쓰지 않고 윤년을 확인하는 코드 
{
	int a;
	
	scanf("%d", &a);

	printf("%d\n", a%4==0&&a%400==0||a%100!=0); // 
	
	return 0;
} 

int main() 
//if문으로 윤년을 확인하는 코드  
{
	int a;
	
	scanf("%d", &a);
	
	if (a%4==0&&a%400==0||a%100!=0)
		printf("윤년입니다.")
		
	else printf("평년입니다.");
	
	return 0; 
}
*/


int main()
//영문자 하나를 입력받아서 소문자는 대문자로, 
//대문자는 소문자로 바꾸어서 출력. 
{
	int a;
	
	scanf("%c", &a);
	
	if(a >= 'A' && a <= 'Z')
		printf("%c", a+32);
//		a를 소문자로 바꾸어주기 위해서 32를 더한다. 
		
	else printf("%c", a-32);
//	a를 대문자를 바꿔어주기 위해서 32를 뺀다. 
		
	return 0;
 } 







