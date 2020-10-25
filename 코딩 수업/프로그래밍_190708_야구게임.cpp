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
	
	srand(time(NULL)); // rand�Լ��� ������ ����� ���� �ð��� �������� �ʱ�ȭ�Ǵ� �Լ�  
	
	puts("�߱� ������ �����մϴ�.\n");
	
	while(1) 
	{
			com[0] = rand()%10; // 0���� 9������ ������ �����Ѵ�.  
			com[1] = rand()%10; 
			com[2] = rand()%10; 
			
			if(com[0]==com[1] || com[1]==com[2] || com[2]==com[0]) continue;
		
//		printf("%d %d %d\n", com[0], com[1], com[2]);
		
		count=1;
		puts("���� 0~9������ �������� �и��ؼ� 3�� �Է��ϰ� ����Ű�� ġ����!!\n");
		memset(guess, 0, sizeof(guess));
		
		while(1)
		{
			strike=0; ball=0;
			for(i=0; i<10; i++)
				printf("%d ", guess[i]);
				
			printf("3���� ����[0~9]�� �Է����ּ���.\n");
			scanf("%d %d %d", &gamer[0], &gamer[1], &gamer[2]);
			
			if(gamer[0]>9 || gamer[1]>9 || gamer[2]>9) 
			{
				printf("�Էµ� ���� 9���� Ů�ϴ�. �ٽ� �Է����ּ���.\n\n");
				continue;
			}
	
			if(com[0]==gamer[0]) strike++;
			else if(com[0]==gamer[1] || com[0]==gamer[2]) ball++; // ù��°  
			
			if(com[1]==gamer[1]) strike++;
			else if(com[1]==gamer[0] || com[1]==gamer[2]) ball++; // �ι�° 
			
			if(com[2]==gamer[2]) strike++;
			else if(com[2]==gamer[0] || com[2]==gamer[1]) ball++; // ����°  
			
			guess[gamer[0]]=1, guess[gamer[1]]=1, guess[gamer[2]]=1;
			// �Է¹��� ���� 1�� ǥ���ؼ� ��� 
			
			printf("[%2dȸ] %d ��Ʈ����ũ %d ��\n\n", count, strike, ball);
			
			if(strike==3) break;
			// ��Ʈ����ũ�� �����̸� ���� ����  
			count++; // count ���� ���� 
		}
		getchar(); 
		
		printf("������ ����Ͻðڽ��ϱ�?(y/n)\n"); // ������ �ٽ� �� ���ΰ� �����. 
		scanf("%c", &yesno);
		if(yesno=='n' || yesno=='N') 
		{
			printf("���� ����\n"); 
			break; // �Է¹��� ���� n�̸� while�� ����  
		}
	}
}
