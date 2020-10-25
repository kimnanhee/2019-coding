#include <stdio.h>
#include <windows.h>
#define size 8

char que[8]={NULL}; // 원형큐의 역할을 할 배열 
int flag[8]={0}; // 원형큐의 값의 유무를 확인하는 배열 
// 1이면 값이 있고, 0이면 값이 없다. 
int front=0, rear=0; // front, rear포인터 
int i, j;
char input, keep; // 사용자가 입력한 문자를 받는 함수  

void inqueue(char a) // 큐에 값을 넣어주는 함수  
{
	rear=(rear+1)%size; // rear값을 증가시키고 큐의 크기로 나누기  
	que[rear]=a; // 큐에 입력받은 값 넣기  
	flag[rear]=1; // 플래그 배열에 1 
	
	printf("\n  [ status ] 입력받은 값 : %c\n\n", input); // 입력받은 값을 출력한다  
}

void dequeue() // 큐에 들어있는 값을 pop해줄 함수 
{
	front=(front+1)%size; // front값을 증가시키고 큐의 크기로 나누기  
	keep=que[front]; // 삭제하는 값 복사  
	que[front]=NULL; // 큐의 값 지우기  
	flag[front]=0; // 플래그 배열에 0 
	
	printf("\n  [ status ] : 삭제한 값 : %c\n\n", keep); // 복사한 값(삭제된 값) 출력  
} 

void notice_print() // 안내 표시 
{
	printf("  삽입을 원하는 원소를 입력해주세요.\n");
	printf("  0을 입력하면 원소가 pop됩니다.\n");
	printf("  프로그램을 종료하려면 9를 입력해주세요.\n\n");
}

void inter_print() // 원형으 모양으로 que배열에 들어있는 값을 출력해준다. 
{
	printf("      원형큐\n");
	printf("  rear : %d / front : %d \n\n", rear, front); // rear, front 포인터 값 출력  
	
	printf("  .---.  .---.  .---.     \n");
	printf("  | %c |  | %c |  | %c |  \n", que[0], que[1], que[2]); 
	printf("  .[0].  .[1].  .[2].     \n\n");
	
	printf("  .---.         .---.       \n");
	printf("  | %c |         | %c |     \n", que[7], que[3]); 
	printf("  .[7].         .[3].       \n\n");
		
	printf("  .---.  .---.  .---.     \n");
	printf("  | %c |  | %c |  | %c |  \n", que[6], que[5], que[4]); 
	printf("  .[6].  .[5].  .[4].     \n\n");
}

/////////////////////////////////////////////// 메인 
int main()
{
	while(1)
	{
		notice_print(); // 입력조건 출력하기  
		printf("  입력 : ");
		scanf(" %c", &input); // 입력받기 
		system("cls"); // 화면 지우기
		if(input=='9') 
		{
			printf("\n\n  queue is END\n"); // 입력받은 값이 9이면 프로그램 종료하기  
			return 0; 
		}
		
		else if(input=='0') // 입력받은 값이 0 
		{
			if(rear == front) printf("  [ status ] queue is empty!!\n\n"); // rear포인터와 front포인터가 같으면 큐가 비어있다고 표시 
			else dequeue(); // 아닐 경우에는 dequeue함수 실행하기  
		}
		
		else // 아닐경우 
		{
			if((rear+1)%size==front) printf("  [ status ] queue is full!!\n\n"); // 큐가 꽉찼으면 표시  
			else inqueue(input); // 아닐 경우에는 inqueue에 입력받은 값 넘겨주기 
		}
		inter_print(); // 매번 인터페이스 출력하기  
	}
	return 0;
}
