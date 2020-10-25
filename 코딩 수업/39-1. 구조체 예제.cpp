// 구조체를 이용해서 이름, 국어 점수, 영어 점수를 입력받고
// 이름, 국어 점수, 영어 점수, 점수의 합, 점수의 평균을 출력
#include <stdio.h>

typedef struct point
{
	char name[20];  
	int korean;
	int english;
	int sum;
	float tmp;
}PP; 

int main()
{
	PP NAN; 
	
	printf("이름, 국어 점수, 영어 점수를 차례대로 입력해주세요.\n");
	scanf("%s %d %d", &NAN.name, &NAN.korean, &NAN.english);
	
	NAN.sum=NAN.english+NAN.korean;
	NAN.tmp=(float)NAN.sum/2;
	
	printf("이름 : %s\n", NAN.name); 
	printf("국어 점수 : %d\n", NAN.korean); 
	printf("영어 점수 : %d\n", NAN.english); 
	printf("점수 합 : %d\n", NAN.sum); 
	printf("평균 : %.2f\n", NAN.tmp); 
}
