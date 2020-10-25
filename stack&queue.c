// 학생들의 이름, 생년월일, 주소를 스택에 입력받아서 
// 1980년 이후의 학생의 내용만 원형큐에 저장하시오. 
// 스택과 원형큐는 동적할당받으시오. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person{ // 개인 정보를 담고있는 구조체 
	char name[30];
	int birthdate;
	char address[50];
};
int main()
{
	struct Person *stack;
	struct Person *que;
	int stack_size, que_size=1, i;
	int rear=-1, front=-1;
	
	printf("원하는 스택의 크기 : ");
	scanf("%d", &stack_size); // 스택 사이즈 
	
	stack=(struct Person *)malloc(sizeof(struct Person) * stack_size); // 스택 동적할당 
	
	for(i=0; i<stack_size; i++) { // 입력받기 
		printf("학생 %d번째 : ", i+1);
		scanf("%s %d %[^\n]s", stack[i].name, &stack[i].birthdate, stack[i].address);
	}
	
	que=(struct Person*)malloc(sizeof(struct Person) * que_size); // 큐 동적할당 
	
	for(i=0; i<stack_size; i++) {
		if(stack[i].birthdate >= 19900101) { // 1990년도 이후만 원형큐에 저장 
			rear++; // rear 포인터 증가 
			if(rear==0) { // 원형큐에 처음 저장이 아닐경우
				que[rear]=stack[i];
			}
			else {
				que = (struct Person *)realloc(que, sizeof(struct Person) * que_size); // 큐 재할당 
				que[rear]=stack[i];
			}
			que_size++; // 큐 사이즈 증가
		}
	}
	
	for(i=0; i<=rear; i++) {
		printf("\n%d번째 : %s %d %s", i+1, que[i].name, que[i].birthdate, que[i].address); // 확인용, 제출할 때 지우기 
	}
	
	free(stack); // 데이터 free 
	free(que);

	return 0;
}
