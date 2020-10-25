/*
[typedef 활용]

타입을 새롭게 정의할 때 쓴다.

typedef를 사용하면 기존에 사용하는 
데이터 타입에 새로운 이름을 붙일 수 있다. 

[format]
typedef의 기존데이터형 새로운데이터형 이름; 
*/


#include <stdio.h>
typedef char* word;
// char* 이라는 자료형을 word라는 자료형으로 새롭게 정의 
 
/*
struct point
{
	int x;
	int y;
}; 
typedef struct point PPAP;
// 구조체를 만들고  
// 구조체의 타입을 새로운 타입으로 정의 
*/
 
typedef struct point
{
	int x;
	int y; 
}PPAP; 
// struct point 라는 타입의 구조체를 PPAP자료형으로 정의  

int main()
{
	char* t = "hello";
	word c = "Oh";
	
	printf("%s\n", t);
	printf("%s\n", c);
	
//	struct point dsm1;
	PPAP dsm1;
	dsm1.x = 20;
	
	printf("dsm1.x = %d\n", dsm1.x);
	
	return 0; 
}
