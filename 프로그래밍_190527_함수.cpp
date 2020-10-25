#include <stdio.h>
/*
int add(int a, int b) // 두 수 더하기  
{
	return a+b;
}
int main()
{
	int re=0;
	re=add(2, 3);
	printf("re:%d", re);
}
*/
/*
float add(float *a, float *b) // 주소값을 주는 식으로 바꾸기  
{
	return *a+*b;
}
int main()
{
	float a, b, re;
	scanf("%f %f", &a, &b);
	re=add(&a, &b);
	printf("re:%.2f", re);
}
*/
/*
int calculatesum(int begin, int end) // 입력받은 두 수 사이의 수를 더해서 반환  
{
	int i, sum=0;
	for(i=begin; i<=end; i++)
		sum+=i;
	return sum;
} 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("두 수 사이의 값은:%d", calculatesum(a, b));
}
*/
/*
float sum(float a, float b) // 큰 수를 반환하는 함수  
{
	float big=(a>b ? a:b);
	return big;
}
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("big=%f", sum(a, b));
}
*/
/*
int prime(int a) // 홀수일때는 0을 반환, 아닐때는 1을반환
{
	if(a%2==1) return 0;
	else return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", prime(a));
}  
*/
/*
int prime(int a) // 소수 구하기, 1~100까지의 소수 개수  
{
	int j;
	for(j=2; j<a; j++)
		if(a%j==0) return 0;
	return 1;
}
int main()
{
	int i, count=0;
	for(i=2; i<100; i++)
	
	if(prime(i))
	{
		count++;
		printf("%d ", i);
	}
	printf("%d", count);
} 
*/
/*
int small(int a, int b) // 최소 공배수를 구하는 코드 
{
	int i;
	for(i=1; i<999; i++)
	{
		if(i%a==0 && i%b==0)
		return i;
	}
}
int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", small(a, b));
	
	return 0;
}
*/
/*
int big(int a, int b) // 최대 공약수를 구하는 함수  
{
	int i;
	for(i=999; i>=1; i--)
	{
		if(a%i==0 && b%i==0)
		return i;
	}
} 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", big(a, b));
	return 0;
}
*/
/*
void swap(int a, int b) // 두 실수를 바꿔서 반환하는 코드  
{
	int tmp;
	printf("a=%d b=%d\n", a, b);
	tmp=a;
	a=b;
	b=tmp;
	printf("a=%d b=%d", a, b);
}
int main()
{
	int a, b, tmp;
	scanf("%d %d", &a, &b);
	swap(a, b);
	return 0;
}
*/
/*
void swap(int *a, int *b) // 함수가 끝난 후에도 바뀐 내용이 유지되는 코드  
{
	int tmp;
	
	tmp=*a; // tmp에 a의 주소 대입  
	*a=*b; // a의 주소에 b의 주소 대입  
	*b=tmp; // b의 주소에 tmp의 주소 대입  
}
int main()
{
	int a, b; // 정수형 변수 
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
}
*/


































