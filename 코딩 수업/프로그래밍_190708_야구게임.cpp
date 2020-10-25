#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
	int com[3] = {0, };
	int gamer[3] = {0, };
	int guess[10] = {0, };
	int count, i, j, k;
	int ball, strike;
	char yesno;
	
	srand(time(NULL)); // rand함수가 난수를 만들기 전에 시간을 기준으로 초기화되는 함수  
	
	puts("야구 게임을 시작합니다.\n");
	
	while(1) 
	{
			com[0] = rand()%10; // 0부터 9까지의 난수를 생성한다.  
			com[1] = rand()%10; 
			com[2] = rand()%10; 
			
			if(com[0]==com[1] || com[1]==com[2] || com[2]==com[0]) continue;
		
//		printf("%d %d %d\n", com[0], com[1], com[2]);
		
		count=1;
		puts("숫자 0~9까지를 공백으로 분리해서 3개 입력하고 엔터키를 치세요!!\n");
		memset(guess, 0, sizeof(guess));
		
		while(1)
		{
			strike=0; ball=0;
			for(i=0; i<10; i++)
				printf("%d ", guess[i]);
				
			printf("3개의 숫자[0~9]를 입력해주세요.\n");
			scanf("%d %d %d", &gamer[0], &gamer[1], &gamer[2]);
			
			if(gamer[0]>9 || gamer[1]>9 || gamer[2]>9) 
			{
				printf("입력된 값이 9보다 큽니다. 다시 입력해주세요.\n\n");
				continue;
			}
	
			if(com[0]==gamer[0]) strike++;
			else if(com[0]==gamer[1] || com[0]==gamer[2]) ball++; // 첫번째  
			
			if(com[1]==gamer[1]) strike++;
			else if(com[1]==gamer[0] || com[1]==gamer[2]) ball++; // 두번째 
			
			if(com[2]==gamer[2]) strike++;
			else if(com[2]==gamer[0] || com[2]==gamer[1]) ball++; // 세번째  
			
			guess[gamer[0]]=1, guess[gamer[1]]=1, guess[gamer[2]]=1;
			// 입력받은 수를 1로 표시해서 출력 
			
			printf("[%2d회] %d 스트라이크 %d 볼\n\n", count, strike, ball);
			
			if(strike==3) break;
			// 스트라이크가 세번이면 게임 종료  
			count++; // count 값을 증가 
		}
		getchar(); 
		
		printf("게임을 계속하시겠습니까?(y/n)\n"); // 게임을 다시 할 것인가 물어본다. 
		scanf("%c", &yesno);
		if(yesno=='n' || yesno=='N') 
		{
			printf("게임 종료\n"); 
			break; // 입력받은 값이 n이면 while문 종료  
		}
	}
}
