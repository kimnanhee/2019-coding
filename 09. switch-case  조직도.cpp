#include <stdio.h>
// stdio.h는 표준 입출력 라이브러리 헤더 파일을 포함시킨다.
// stdio.h => scanf(), printf(), etc... 이런것이 들어있다. 
// 헤더 파일을 포함 시켜야 입출력을 할 수 있다. 

int main; // 프로그래밍의 시작점 
{ 
	//scope의 시작범위  
	int a;
	//a라는 이름을 가진 변수 공간을 메모리에 만들겠다고 할당하고 선언 
	
	scanf("%d", &a);
	// 십진수 정수를 입력받아 a라는 변수의 메모리의 주소를 찾아서
	// 그 곳에 사용자가 입력한 값을 삽입  
	
	if(a>0)
		printf("positive number\n");
		
	else if(a==0)
		printf("zero\n");
		
	else(a<0)
		printf("negative number\n");
		
	// if ⑴ - else if ⑵ - else ⑶ 
	
	// if 조건문이 참이면 ⑵ 명령문 실행  
	
	// if 조건문이 거짓이고 else if조건문이 참이면 ⑵ 명령문 실행
	
	// if, else if 명령문이 모두 거짓이면 else 명령문 실행 
	  
		
	switch(a++>0)
	{
		case 1:
			printf("big\n");
			break;
			
		case 0:
			printf("small\n");
			break;
			
		dafault:
			printf("zero\n");
	} 
	// swich 조건문이 나타나는 값에 따라 해당하는 case로 전환되어 명령문 실행
	
	// break가 있으면 해당 명령문을 실행하고 종료 
	
	// case가 모두 해당되지 않으면 dafault에 있는 명령문 실행  
	
	printf("but 'a' is ... %d", a);
	// a의 값을 출력 
	
	return 0;
}
