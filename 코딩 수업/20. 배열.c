//sizeof를 써서 배열 크기 활용하기

/*

int arr1[5] = {1, 2, 3, 4, 5}; 
int i;

for(i=0; i<5; i++)
	printf("%3d",  arr1[i]); // 출력하기 전 공백을 3출력한다.
	// 배열의 5개 요소를 출력함.
	// 갑자기 arr1의 크기가 커지고 배열 요소가 많아진다면 
	
int arr2[10] = {5, 6, 7, 8, 9, 1, 2, 3, 4, 5};

for(i=0; i<sizeof(arr2)/sizeof(int); i++) // int형은 하나가 4이므로  
	printf("%3d", arr2[i]);
	
//for 가독성 및 이식성 
int arr2_size = sizeof(arr2)/sizeof(int);

printf("\n\narr2's size = %d\n", arr2_size);
for(i=0; i<arr2_size; i++)
	printf("%3d", arr[i]);

*/
	
// arr2_size 변수에 arr2의 크기 값을 넣어준다
// for문에서 i 인덱스 값을 0부터 arr2_size값 전까지
// 제한하여 arr2의 요소를 모두 출력한다.

// 배열의 주소가 0부터 시작하는 이유는
//  메모리 주소가 0부터 시작하는 형식을 따르기 때문

// 문자배열만들기 
 
#include <stdio.h>

int main()
{
	char str1[5] = "fire";
	char str2[4] = {'b', 'i', 'g', '\0'};
	
	printf("%c\n", str1[3]); // e출력  
	printf("%c\n", str2[2]); // g출력  
	
	printf("%s\n", str1); // 전체 출력  
	printf("%s\n", str2);
	
	int i;
	for(i=0; i<sizeof(str2); i++);
	 
	printf("\n");
	
	for(i=0; i<str2[i]!=NULL; i++) 
	// str2[i]이 NULL이 아니면 출력을 하고, NULL이면 출력을 멈춘다.  
		printf("%c", str2[i]);
		
	return 0;
}
