#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a); 
	
	if(a>3) // if 조건문이 참일때  
		printf("3보다 크당!! \n");
	
	else if(a==3) // if 조건문이 거짓이고 else if 조건문이 참일때  
		printf("너는 3이구낭!! \n");
	
	else // 둘 다 거짓일때 
		printf("3보다 작구나.. \n");
	
	return 0;
}







/*
{
	int a;
	scanf("%d", &a);
	
	if(a>10)
		if("a%2==0"){
			printf("10보다 크면서 짝수이당!! \n");
			return 0;
		}
		
		print("10보다 큰 홀수입니다.. \n")
	
	else
		printf("10 이하인 정수입니다.. \n");
			
	return 0; 
}
*/




/*
{
	int a=3, b=2;
	
	if(a==b)
		printf("same!!\n");
	//명령문이 여러개일 경우 괄호로 묶는다. 
		
	if(a>b)
		printf("a가 더 크다.\n");
		
		if(a!=b)
			printf("다르다!! \n");
			
	return 0; 
}
*/





/*
{
	int a=0;
	
	//scanf("%d", &a)
	
	if(a==3)
		printf("3이다!!");
	
	
	return 0;
}
*/
