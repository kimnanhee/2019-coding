/*
#define
'전처리기의 지시자'의 활용
매크로 상수나 매크로 함수를 만들 수 있다. 
*/


#include <stdio.h>
#define PI 3.14 // 매크로 상수 
// PI를 3.14로 치환  
#define mul(x) x*x
#define swap(x, y) {int t; t=x; x=y; y=t;}
#define pnt(x) printf(#x"=%d\n", x)
// 매크로 함수나 상수를 만들었을 때의 장점은
// 어떤 값을 변경할 때 매크로만 변경하면 된다.   

int main()
{
	//	PI=4; // 매크로 상수의 값을 바꿀수 없다.  

	int num2=6;
	pnt(num2+3);
	 
	printf("%f\n", PI);
	
	int num=4;
	printf("%d", mul(num));
} 

