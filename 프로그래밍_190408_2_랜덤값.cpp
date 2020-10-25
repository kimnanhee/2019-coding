#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
// 컴퓨터가 랜덤으로 정한 수 맞추기  
{
	int a; //입력받는 수 
	int count=0; // 반복문이 실행된 횟수  
	int num; // 랜덤값  
	
	srand (time(0));
	num = rand() % 100+1; // 컴퓨터가 랜덤으로 수 하나 생성 
	
	while(1) // 무한반복문  
	{
		printf("숫자 하나를 입력하세요 : "); 
		
		scanf("%d", &a); // 수 입력받기  
		
		count++; // 반복문을 빠져나가지 못하면 count값이 1씩 증가한다. 
		
		if(a==num) break; // 랜덤값과 입력받은 수가 같으면 반복문 탈출  
		
		else if (a<num) printf("그것보다는 크지!\n\n"); // 입력받은 수가 랜덤값보다 작으면 크다라는 말을 출력  
		
		else printf("그것보다는 작아!\n\n"); // 입력받은 수가 랜덤값보다 크면 작다라는 말을 출력  
		
	//	count++; // 반복문을 빠져나가지 못하면 count값이 1씩 증가한다. 
	}
	
	printf("%d번 시도해서 맞추셨습니다.", count); // 몇 번 시도했는지 수로 출력  
	
	return 0;
}


