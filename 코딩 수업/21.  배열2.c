#include <stdio.h>

// 문자열 입력받기  
/*
int main()
{
	char str1[] = "Hello";
	char str2[6] = {'s', 'm', 'i', 'l', 'e', '\0'};
	
	printf("str1 : %s %d\n", str1, sizeof(str1));
	// 문자열 뿐만 아니라 '\0'까지 있어서 사이즈가 6이 나온다. 
	printf("str2 : %s %d\n", str2, sizeof(str2));
	
	return 0;
}
*/


// 문자열 입력받기
int main()
{
/*char str3[100];

scanf("%s", str3); 
// 기존에 값을 입력받을 때는  
// 변수에 주소를 입력받는 문법을 썼다. 

// 배열의 값을 입력받을 때는 
// '배열의 이름 = 주소'가 되기 때문에  
// 변수의 주소를 표시해주는 &를 사용할 필요가 없다.
 printf("%s\n", str3);
 */


	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	printf("%d", *&a);
	// &(앰퍼샌드), *(에스테리스크)
	// &와 *는 상호 보완 관계이다.
	// & : 주소를 찾아준다.
	// * : 주소가 가진 곳의 값을 찾아준다. 

int str4[5];

scanf("%d", str4);
scanf("%d", &str4[0]);
// 배열의 주소 = 배열 이름 = 배열 첫번째 값의 주소
// str4 == str4의 주소 == &str4[0] 
// 베열의 첫번째 값의 주소 = &str4[0] = str47
// 배열의 두번째 값의 주소 &str4[1] = str4 + 1
// 배열 주소 공식 => str4[i] = str4 + i 

printf("%d", *str4);
printf("%d", str4[0]);


scanf("%s", str);
// 공백을 입력받을 수가 없다.
// Hello world를 입력하면 
// Hello 가 출력된다.


int i;
for(i=0; i<n; i++)
{
	scanf("%s", str);
	printf("%s", str);
} 


// 배열의 복사  
int data1[] = {10, 20, 30, 40, 50};
int data2[5];

data2=data1;
// 문법 상 틀리다
//  복사할 때는 배열 요소를 일일이 복사해야한다.
for(i=0; i<5; i++)
	data2[i]=data1[i];
// 복사된 배열 요소를 하나하나 출력한다.  
	 
for(i=0; i<5; i++)
	printf("%d", data2[i]);

return 0; 
}
