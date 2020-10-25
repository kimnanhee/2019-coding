// 구조체 포인터와 배열

#include <stdio.h>

int main()
{
	struct point // 구조체 선언  
	{
		int x;
		int y;
	};
	
	struct point arr1[10];
	arr1[0].x = 40;
	arr1[0].y = 30;
	arr1[1].x = 20;
	
	struct point var1;
	struct point*p = &var1;
	
	
	(*p).x = 10;
	p->x = 10;
	// 두 가지 방법
	// -> 간법 멤버 참조 연산자  
	
	printf("%d\n", p->x);
 } 
  
