#include <stdio.h>

/*
int main()
// E가 입력 될때까지 무한 출력  
{
	char a;
	
	while(1)
	{
		printf("I: 추가 D: 삭제 S: 검색 L: 전체 출력 E: 종료\n"); 
		printf("메뉴 선택:"); 
		
		scanf(" %c", &a);
		
		if(a=='I' || a== 'i') printf("추가\n");
		
		else if(a=='D' || a== 'd') printf("삭제\n");
		
		else if(a=='S' || a== 's') printf("검색\n");
		
		else if(a=='L' || a== 'l') printf("전체 선택\n");
		
		else if(a=='E' || a== 'e') break;
		
		else printf("잘못 선택하셨네요\n");
	}
	return 0;
}
*/


/*
int main()
// 배열 선언해서 성적 출력하기  
{
	int score[3] = {80, 60, 90};
	
	printf("국어 성적 : %03d\n", score[0]);
	printf("영어 성적 : %03d\n", score[1]);
	printf("수학 성적 : %03d\n", score[2]);
	
	return 0; 
} 	
*/


/*
int main()
// 배열 for문으로 출력하기  
{
	int i;
	
	int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for(i=0; i<10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
} 
*/

/*
int main()
{
	int arr[10] = {1,};
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/


/*
int main()
// 배열에서 총합을 구하고, 평균을 구하기  
{
	int i;
	int sum=0;
	
	int numarr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for(i=0; i<10; i++)
	{
		sum+=numarr[i];
	}
	printf("총합 : %d\n", sum);
	
	printf("평균 : %d", sum/10);
	
	return 0;
}
*/


/*
int main()
// 위의 배열의 값을 2배씩 곱해서 출력  
{
	int i;
	int sum=0;
	
	int numarr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for(i=0; i<10; i++)
	{
		sum+=numarr[i];
	}
	printf("총합 : %d\n", 2*sum);
	
	printf("평균 : %d", (2*sum)/10);
	
	return 0;
}
*/


/*
int main()
// 숫자 하나 입력 받아서 2진수로 출력하기  
{
	int a, i;
	int arr[31] = {0};
	
	scanf("%d", &a);
	
	for(i=31; i>=0 && a!=0; i--)
	{
		arr[i] = a%2;
		a = a/2;
	}
	
	for(i=0; i<32; i++)
		printf("%d", arr[i]);
	
	return 0;
} 
*/

/*
int main()
// 2진수를 입력 받아서 10진수로 출력 
{
	int i, sum=0;
	int arr[4] = {0, 0, 1, 1};
	
	for(i=3; i>=0; i--)
	{
		if(arr[i] == 1)
		{
			sum += 1 << (4-i);
		}
 	}
	printf("%d", sum);
	
 	return 0;
} 
*/
