#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user_input(int input[]);
void make_number(int lotto[]);
int check_number(int input[], int lotto[]);
void result(int n);

int main()
{	
	int lotto[6]={0}, input[6]={0};
	int i, count=0;
	
	user_input(input); 
		
	make_number(lotto);
	
	printf("복권번호 : ");
	for(i=0; i<6; i++)
		printf("%d ", lotto[i]); // 복권번호 출력하기 
	
	count=check_number(input, lotto); 
	
	printf("\n%d개의 번호 일치\n", count);
	
	result(count);
	
	return 0;
}

void user_input(int input[]) // 사용자 숫자 입력받기 
{
	int i, j, select=1;
	printf("겹치는 숫자가 없도록 6개를 입력해주세요.(1~45)\n");
	while(select) // user 입력받기  
	{
		for(i=0; i<6; i++)
			scanf("%d", &input[i]);
		select=0;
		for(i=0; i<6; i++)
		{
			if(input[i]<1 || input[i]>45) 
			{
				select=1;
				break;
			}
		}
		if(select==0) break;
		printf("\n입력하신 숫자가 맞지않습니다.\n");
		printf("숫자를 다시 입력해주세요.\n");
	}
	printf("\n----------------------------------\n\n");
	return;
}
void make_number(int lotto[]) // 복권 번호 생성하기 
{
	int i, j;
	srand(time(NULL));
	for(i=0; i<7; i++)  
	{
		lotto[i]=(rand()%45+1); // 1~45까지의 랜덤 숫자 생성 
		
		for(j=0; j<i; j++)
		{
			if(lotto[i]==lotto[j]) // 겹친번호가 있으면 다시 만들기 
			{
				i--;
				break;
			}
		}
	}
	return;
}
int check_number(int input[], int lotto[]) // 입력받은 값과 로또값이 일치하는지 확인해준다. 
{
	int i, j, cnt=0;	
	for(i=0; i<6; i++)
		for(j=0; j<i+1; j++)
		{
			if(input[i]==lotto[j]) // 일치하면 cnt변수 증가 
				cnt++;
		}
	return cnt;
}
void result(int n) // 출력함수 
{
	switch(n) // 변수n에 따라서 결과 출력하기 
	{
		case 0:
		case 1:
		case 2:
			printf("\n\n아쉽지만 다음에 도전해주세요ㅠㅠㅠ");
			break;
		case 3:
			printf("\n\n축하드립니다!\n");
			printf("3개의 번호가 일치해서 4등에 당첨되셨습니다!");
			break;
		case 4:
			printf("\n\n축하드립니다!\n");
			printf("4개의 번호가 일치해서 3등에 당첨되셨습니다!\n");
			break;
		case 5:
			printf("\n\n축하드립니다!\n");
			printf("5개의 번호가 일치해서 2등에 당첨되셨습니다!");printf("\n");
			break;
		case 6:
			printf("\n\n축하드립니다!\n");
			printf("6개의 번호가 모두 일치해서 1등에 당첨되셨습니다!");
			break;
	}
	return;
}
