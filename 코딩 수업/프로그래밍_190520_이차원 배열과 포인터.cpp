#include <stdio.h>
/*
int main()
{
	int *numptr1; // 단일 포인터 선언  
	int **numptr2; // 이중 포인터 선언  
	int num1=10;
	
	numptr1 = &num1; // num1의 메모리 주소 저장  
	numptr2 = &numptr1; // numptr1의 메모리 주소 저장  
	printf("%d", **numptr2);
	return 0; 
}
*/
/*
int main()
{
	int numArr[3][4] = {
	{11, 22, 33, 44},
	{55, 66, 77, 88}, 
	{99, 110, 121, 132}
};
	int (*numptr)[4] = numArr;
	
	printf("%d", numptr[0][0]);
} 
*/
/*
int main() // 문제1번  
{
	int a[3][4] = {
	{1, 2, 3, 4}, 
	{5, 6, 7, 8}, 
	{9, 10, 11, 12}
	};
	
	int (*p)[4]=a;
	printf("%d\t", *(*p));
	printf("%d\t", *(*p+1));
	printf("%d\t", *(*p+2));
	printf("%d\n", *(*p+3));
	
	printf("%d\t", *(*(p+1)));
	printf("%d\t", *(*(p+1)+1));
	printf("%d\t", *(*(p+1)+2));
	printf("%d\n", *(*(p+1)+3));
	
	printf("%d\t", *(*(p+2)));
	printf("%d\t", *(*(p+2)+1));
	printf("%d\t", *(*(p+2)+2));
	printf("%d\n", *(*(p+2)+3));
	
	printf("\n");
	for(int i=0; i<3; i++)	
	{
		for(int j=0; j<4; j++)
		{
			printf("%d\t", *(*(p+i)+j));
		}
	}
	return 0;
}
*/
/*
int main()
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	
	int (*p)[4] = a;
	printf("%p %p %p %p\n", a, *a, a[0], &a[0][0]);
	printf("%p %p %p %p", p, *a, p[0], &p[0][0]);
	return 0;
}
*/
/*
int main()
{
//	char nation[][15] = {"영국", "오스트레일리아", "칠레", "헝가리", "베트남"};
//	for(int i=0; i<5; i++)
//		printf("%s\n", nation[i]);
		
	char *nation[] = {"영국", "오스트레일리아", "칠레", "헝가리", "베트남"};
	for(int i=0; i<5; i++)
		printf("%s\n", nation[i]);
}
*/

int main()
{
	char *a[2];
	char **p;
	
	a[0] = "ABC";
	a[1] = "abc";
	
	printf("%s\t", a[0]);
	printf("%s\n\n", a[1]);
	
	p=a;
	printf("%s\t", *p);
	printf("%s\n", *(p+1));
	
	printf("%c\n", *(*(p+1)+1));
}









