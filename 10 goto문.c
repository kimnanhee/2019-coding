//goto문 

#include <stdio.h>

int main()
{
	int a=72, n;
	
	
	start: 
		printf("number? \n");
		
		scanf("%d", &n);
		
		if(n==a)
			printf("정답!\n");
			
		else{ 
			printf("오답!\n");
			goto start;
			// start라는 레이블이 있는곳으로 이동  
			}
	
	return 0;
}





//프로그램은 기본적으로 순차적으로 명령어 실행 
//goto문은 프로그램이 실행되는 순서를 
//임의로 바꾸는 기능을 한다. 

//goto문은 동일한 함수 내에서만 점프가 가능 


#include <stdio.h>

/*
int test()
{
	int i=10;
	this:
		printf("%d", i);
		return 0;
 } 
int main()
{
	goto this;
	return 0;
}
*/

//goto로 점프한 레이블이 
//goto명령문을 내포한 함수 
//다른 함수에 위치해 있기 때문에  
//점프할 수 없다. 



/*
int main()
//2의 배수 출력하기. 
{
	int i;
	
	for(i=1; i<=10; i++)
		if(i%2==0)
			printf("%d\n", i);
		
	return 0;
 } 
*/
 
 

/* 
int main()
//2의 배수혹은 3의 배수 출력하기. 
{
	int i;
	
	for(i=1; i<=100; i++)
		if(i%2==0 || i%3==0)
		printf("%d\n", i);
		
	return 0;
}
*/


/*
int main()
//2의 배수이면서 3의 배수 출력하기. 
{
	int i;
	
	for(i=1; i<=100; i++)
		if(i%6==0)
		printf("%d\n", i);
		
	return 0;
}
*/


