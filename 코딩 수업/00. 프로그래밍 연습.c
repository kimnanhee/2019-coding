/* 
#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(int)); //256가지의 숫자를 담을 수 있다.  
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float)); //표현할 수 있는 정밀도의 차의를 가지고 있다. 
	printf("%d\n", sizeof(double));
//	sizeof 연산자를 이용해서 자료형의 크기 계산.
	
	return 0;
}
*/


/*
#include <stdio.h>

int main() //	정수 하나를 입력받아서 그 값에 10을 곱해서 출력해라. 
 {
 	int a;
 	
 	scanf("%d", &a); //	&는 주소를 의미하는 표시  
 	printf("%d", a*10);
 }
*/


/*
#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);
	printf("%d\n", a); //	%d는 10진수  
	printf("%o\n", a); //	%o는 8진수  
	printf("%x\n", a); //	%x는 16진수  
	printf("%X\n", a); //	%X는 16진수가 대문자로 출력된다. 
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", a%b);
	//	두 정수 입력받아서 몫 출력하기. 
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("사각형의 넓이는 : %d", a*b);
	
	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("합 : %d\n", a+b);
	printf("차 : %d\n", a-b);
	printf("곱 : %d\n", a*b);
	printf("몫 : %d\n", a/b);
	
	printf("몫 : %f\n", (float)a/b);
	//	두 정수 입력받아서 사칙연산하기.  
	
	return 0;
} 
*/


/*
#include <stdio.h>

int main
{
	float f;
	double d, e1, e2;
	
	float f = 3.1415926535897932384626;
	double d = 3.1415926535894932384626;
	double e1 = 0.56789;
	double e2 = 234.56789;
	
	printf("%f\n", f);	
	printf("%.10f\n", f);	
	printf("%lf\n", d);	
	printf("%.20lf\n", d);	
	printf("%e\n", e1);	
	printf("%e\n", e2);	
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	printf("%c\n", 65);
	printf("%c\n", 0101 + 1);
	printf("%c\n", 0x41 + 1);
	printf("%c\n", 'A');
	printf("%c\n", '\101' + 1);
	printf("%c\n", '\x41' + 1);
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	const int con = 10;
	printf("%d\n", 10);
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d",&a, &b);
	
	printf("%d", a<<b); 
	//	<<는 쉬프트 연산이다. a를 b의 수만큼 왼쪽으로 쉬프트해라. 
	//	왼쪽으로 쉬프트하면 2씩 곱해진다.
	
	return 0; 
} 
*/


#include <stdio.h>

int main()
{
	printf("%d\n", 1 & 1); //	1
	printf("%d\n", 1 & 0); //	0
	printf("%d\n", 0 & 1); //	0
	printf("%d\n", 0 & 0); //	0
	printf("%d\n", 2 & 3); //	2
}









