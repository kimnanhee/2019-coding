// �л����� �̸�, �������, �ּҸ� ���ÿ� �Է¹޾Ƽ� 
// 1980�� ������ �л��� ���븸 ����ť�� �����Ͻÿ�. 
// ���ð� ����ť�� �����Ҵ�����ÿ�. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person{ // ���� ������ ����ִ� ����ü 
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
	
	printf("���ϴ� ������ ũ�� : ");
	scanf("%d", &stack_size); // ���� ������ 
	
	stack=(struct Person *)malloc(sizeof(struct Person) * stack_size); // ���� �����Ҵ� 
	
	for(i=0; i<stack_size; i++) { // �Է¹ޱ� 
		printf("�л� %d��° : ", i+1);
		scanf("%s %d %[^\n]s", stack[i].name, &stack[i].birthdate, stack[i].address);
	}
	
	que=(struct Person*)malloc(sizeof(struct Person) * que_size); // ť �����Ҵ� 
	
	for(i=0; i<stack_size; i++) {
		if(stack[i].birthdate >= 19900101) { // 1990�⵵ ���ĸ� ����ť�� ���� 
			rear++; // rear ������ ���� 
			if(rear==0) { // ����ť�� ó�� ������ �ƴҰ��
				que[rear]=stack[i];
			}
			else {
				que = (struct Person *)realloc(que, sizeof(struct Person) * que_size); // ť ���Ҵ� 
				que[rear]=stack[i];
			}
			que_size++; // ť ������ ����
		}
	}
	
	for(i=0; i<=rear; i++) {
		printf("\n%d��° : %s %d %s", i+1, que[i].name, que[i].birthdate, que[i].address); // Ȯ�ο�, ������ �� ����� 
	}
	
	free(stack); // ������ free 
	free(que);

	return 0;
}
