#include <stdio.h>
int big(int a, int b)
{
	return (a>b ? a:b);
} 

char ASC(char a)
{
	return ("%d", a);
 } 

void atoz(int c, int d)
{	int i;
	for(i=c; i<d; i++)	
		printf("%d ", i);
}

void DSM(int a)
{
	int i;
	for(i=0; i<a; i++)
		printf("DSM ");
}

float average(int a, int b, int c)
{
	int sum = a + b + c;
	float average = sum / 3;
	return average;
}

int main()
{
	int number;
	
	int a, b, c;
	while(1)
	{
		printf("몇번 문제를 푸시겠습니까?\n");
		scanf("%d", &number);
		
		if(number==1) 
		{
			printf("두 정수를 입력해주세요.\n");
			int i, j;
			scanf("%d %d", &i, &j);
			printf("큰 수는 %d입니다.\n", big(i, j));
		}
		else if(number==2)
		{
			printf("아스키코드로 바꿀 문자 하나를 입력해주세요.\n"); 
			char a;
			scanf("%c", &a);
			printf("%d\n", ASC(a));
			 
		}
		else if(number==3)
		{
			printf("두 정수를 입력해주세요.\n"); 
			int a, b;
			scanf("%d %d", &a, &b);
			printf("%d\n", atoz(a, b));
		}
		else if(number==4)
		{
			printf("DSM을 몇번 반복해서 출력할 것인지 수 하나를 입력해주세요.\n");
			int a;
			scanf("%d", &a);
			DSM(a)
			printf("\n");
		}
		else if(number==5)
		{
			printf("평균을 출력할 세 정수를 입력해주세요.\n");
			scanf("%d %d %d", &a, &b, &c);
			printf("%.2f\n", average(a, b, c));
		}
		else printf("다시 선택 하세요."); 
	} 
	return 0;
	
}
