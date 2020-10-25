/*
배열 array

	정적 배열 static array
	배열의 크기를 정해서 선언하는 배열  
	
 -하나의 변수
 -여러 개의 방을 사용하는 구조
 -각 반에 동일한 이름에 번호를 붙여서 사용하는 구조

 배열 변수 선언 방법 
 "자료형" "배열 이름" [배열크기]
 
ex)
int room[10]
int => 자료형
room => 배열 이름
10 => 배열의 크기  
*/


#include <stdio.h>

//int main()
//{
//	int a, room[10];
//	
//	for(a=0;a<=9; a++)
//	{
//		room[a]=1;
//	} 
//	return 0;
//}

/
int main()
{
	int size = 5;
	int arr1[size];
	
	arr1[0]=10;
	printf("%d", arr1[0]);
	
	return 0;
}


/*
배열 크기에 변수를 넣고 선언하는 것이 표준화 된지 얼마 안 됨. 

변수 선언과 배열의 차이
RAM (random access memory)

임의 접근 기억장치
RAM은 정해진 개수의 셀이 '물리적으로 연결'되어 있고
그 안에 순서대로 데이터가 저장되는 구조

배열 변수 선언은 물리적으로 연결됨.
RAM의 구조를 따라 순차적으로 할당됨. 

배열이 아닌 변수 선언은 RAM의 여기저기 아무데나 할당됨. 
*/

int main()
{
	int n=10, b=11;
	int arr[n];
	
	arr[0]=5;
	
	printf("n=%d\n", n);
	printf("n=%d\n", &n); 
	printf("b=%d\n", &b);
	
	printf("arr[0]=%d\n", arr[0]);
	
	printf("arr[0]'s address=%d\n", &arr[0]);
	
	printf("arr[0]'s address=%p\n", &arr[0]);
	printf("arr[1]'s address=%p\n", &arr[1]);
	printf("arr[2]'s address=%p\n", &arr[2]);
	printf("arr[3]'s address=%p\n", &arr[3]);
	
	return 0;
}

&는 출력하는 변수 앞에 &를 붙이면 변수의 주소값을 출력해준다. 

변수는 임의로 할당되기 때문에 주소가 순서대로 설정이 되지 않으나

배열 변수는 메모리에서 물리적으로 연속된 구조를 가지고 할당되기 때문에 
주소값이 연속적이다. 

arr[0] = 64895010
arr[1] = 64895014
arr[2] = 64895018  
이런식으로 주소값이 4씩 올라간다. 


 



