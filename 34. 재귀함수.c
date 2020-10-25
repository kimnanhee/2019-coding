/*
재귀함수 
비슷한 관계를 함수로 처리 

void func(int n)
=> 길이가 n인 삼각형을 그리는 함수라고 가정  

func(n) => 길이가 n인 삼각형
func(n-1) => 길이가 n-1인 삼각형

프랙탈과 비슷하다. 

재귀함수를 만들때 규칙
- 종료 조건을 명시할 것 
- return 값을 어덯게 처리할지 생각해 볼 것
*/

/*
#include <stdio.h>

void func1(int n)
{
	if(n==0) return; // 함수의 종료 조건  
	else // 함수의 기능  
		// 기능 : 함수의 인수를 그대로 출력하는 함수  
	   // 응용 : 1부투 함수의 인수까지 출력  
	{
		printf("%d\n", n);
		func1(n-1);
	}
}

int func2(int n)
{
	if(n==0) return 0; // 함수의 종료 조건  
	else return 1+func2(n-1);
	// 기능 : 1을 더해준다. 
} 

int fact(int n)
{
	if(n<=1) return 1;
	else return n*fact(n-1);
}
 
int main()
{
	func1(10);
	printf("func2(10)=%d\n", func2(10));
	printf("fact=%d\n", fact(5));
}
*/

/*
재귀 함수의 장단점

장점  
세부적인 문제 해결 절차에 대한 고민보다는 
문제 해결을 위한 기본적인 컨셉(알고리즘)만 생각하면 된다. 
 
단점
함수 호출 시 인수의 복사, 값의 전달 들으로
과부하가 커지고 함수 호출 깊이가 깊어질수록  
메모리 사용이 증가한다.  
*/

//피보나치 수열의 n번재 요소를 구하는 함수

#include <stdio.h>

int fibonacci(int n)
{
	if(n<=2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", fibonacci(a));  
} 







 
