/*
int a[3]={1, 2, 3};

배열의 주소는 a

&는 주소를 불ㄹ러오고 *는 값을 불러온다.  
 

함수의 파라미터는 호출하는 함수가 
호출되는 함수에게 값을 복사해서 넘겨준다.
이러한 전달 방식을  call-by-value

실 매개변수 : 호출하는 함수가 전달하는 값
형식 매개변수 : 호출되는 함수가 전달받는 값
*/


#include <stdio.h>

/*
int func(int a)
{
	a+=10;
	return a;
}
int main()
{
	int n=0;
	printf("%d", func(n));
	printf("%d", n);
	
	//n은  실 매개변수
	// a는 형식 매개변수
	
	// call-by-value 형식이기 때문에 실 매개변수의 값이
	// 형식 매개변수로 복사해서 전달하기 때문 
}
*/

/*
// call-by-reference 참조에 의한 결과  
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
} 
int main()
{
	int a=10, b=30; 
	printf("함수를 실행하기 전 \n");
	printf("a=%d\nb=%d\n\n", a, b); 
	
	swap(&a, &b);
	
	printf("함수를 실행한 후\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
*/

// 실 매개변수의 값이 아니라 주소를 련식 매개면수에 저장한다.
// 그렇기 때문에 실제 변수의 값을 건드릴 수 있다.  


// 베열의 값을 넘길때는 실제 배열의 주소를 넘겨주는 셈이라서
// call-by-reference 형식으로 처리가 된다.


void arrfunc(int a[])
{
	int i;
	
	for(i=0; i<5; i++)
		a[i] += 10;
} 
int main()
{
	int arr[5]={1, 2, 3, 4, 5};
	
	arrfunc(arr);
	
	int j;
	
	for(j=0; j<5; j++)
		printf("%d  ", arr[j]);
}




