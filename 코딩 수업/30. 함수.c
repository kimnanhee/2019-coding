/*
	함수
	수학에서  함수와는 다르게 컴퓨터에서 함수는 '기능'에 초점이 있다. 
	
	함수의 선언 방법 
	반환형 함수 이름(매개변수)
	{
		지역 변수 선언;
		함수의 바디 부분;
		return 값;
	}
	반환형 : 함수가 결과적으로 내놓는 값의 자료형  
		int, float, void(반환을 안 한다.)
		
	함수 이름 : 함수의 기능이 무엇인지 파악이 되도록 네이밍을 해야 한다. 
				프로젝트 단위의 일을 할 때 중요한 사실
	
	매개변수(파라미터) 
	
	지역변수 선언 : 함수 내에서만 사용하는 변수 
	
	return 값 : 함수의 반환형과 동일하게 값을 지정.
				void함수는 return;만 사용하면 된다. 
				
	프로그래밍에서 함수를 사용하는 이유 : 함수를 구현하고 목적에 맞게 사용하기 위해서.
*/

// 1. 반복되는 일의 단순 묶음  
/*
#include <stdio.h>

void printstar()
{
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("\n");
} 

int main()
{
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("\n");
	
	printstar();
	
	return 0;
}
*/

// 2. 값을 전달받아서 동작하는 함수 

#include <stdio.h>

void printstar(int count)
{
	int i;
	for(i=0; i<count; i++)
	{
		printf("  *  \n");
		printf(" *** \n");
		printf("*****\n");
		printf("\n");
	}
} 
int main()
{
	int no;
	scanf("%d", &no);
	printstar(no);
	
	return 0;
}

/*
// 3. 수행 후 값을 반환하는 함수 
#include <stdio.h>
int add(int a, int b)
{
	return a+b;
} 
int main()
{
	int i, j, sum;
	scanf("%d %d", &i, &j);
	sum=add(i, j);
	
	printf("%d", sum);
}
*/
