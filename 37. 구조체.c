/*
구조체 => structure
// 여려 가지 변수들의 묶으으로 이루어진 변수
// 다양한 타입의 변수들을 묶어서 새로운 타입으로 정의할 수 있다.

배열과 다른 점?? => 배열은 동잃한 자료형의 묶음 

비빔밥
구조체형(타입)을 선언한다 > 구조체 변수를 선언한다
비빔밥 재료를 준비한다 > 비빔밥을 만든다  
*/

#include <stdio.h>

struct ex1 
{
	int a;
	float b;
	char c;
	char d[5];	
};
// 구조체를 만들때 struct라는 구조체 예약어를 
// 무조건 쓴다. 구조체의 이름은 사용자 지정
// 구조체 멤버 변수를 다양하게 선언할 수 있다. 

// 구조체 멤버는 .(직접 멤버 참조 연산자)로 참조 가능  
	
struct ex1 dsm1;
struct ex1 dsm2;
	
int main()
{
	dsm1.a=10; 
	dsm1.b=4.5; 
	dsm2.a=20; 
	dsm2.b=9.5;
	
	printf("dsm1.a = %d\n", dsm1.a); 
	printf("dsm1.b = %f\n", dsm1.b); 
	printf("dsm2.a = %d\n", dsm2.a); 
	printf("dsm2.b = %f\n", dsm2.b); 
	
//	if(dsm1.a==dsm2.a && dsm1.b==dsm2.b)
//		printf("same!!\n");
//	else printf("different!!\n");
	
	// if(dsm1==dsm2) printf("same");
	// 구조체 자체의 비교나 연산은 할 수 없다.
	
	// 구조체 자체의 대입은 가능하다. 
	
	struct ex1 dsm3;
	dsm3=dsm2;
	printf("dsm3.a = %d\n", dsm3.a); 
	
	// 구조체 변수는 선언과 동시에 초기화 가능 
	struct ex1 dsm4;
	dsm4 = {5, 10.8, 'f', {4, 5, 6, 7, 8}};
	
	int i;
	for(i=0; i<5; i++)
		printf("dsm4.d[%d] = %d\n", i, dsm4.d[i]);
	
	printf("dsm4.a = %d\n", dsm4.a); 
	printf("dsm4.b = %f\n", dsm4.b); 
	printf("dsm4.c = %c\n", dsm4.c); 
	
	return 0; 
}







