#include <stdio.h>
#include <windows.h>
#define size 8

char que[8]={NULL}; // ����ť�� ������ �� �迭 
int flag[8]={0}; // ����ť�� ���� ������ Ȯ���ϴ� �迭 
// 1�̸� ���� �ְ�, 0�̸� ���� ����. 
int front=0, rear=0; // front, rear������ 
int i, j;
char input, keep; // ����ڰ� �Է��� ���ڸ� �޴� �Լ�  

void inqueue(char a) // ť�� ���� �־��ִ� �Լ�  
{
	rear=(rear+1)%size; // rear���� ������Ű�� ť�� ũ��� ������  
	que[rear]=a; // ť�� �Է¹��� �� �ֱ�  
	flag[rear]=1; // �÷��� �迭�� 1 
	
	printf("\n  [ status ] �Է¹��� �� : %c\n\n", input); // �Է¹��� ���� ����Ѵ�  
}

void dequeue() // ť�� ����ִ� ���� pop���� �Լ� 
{
	front=(front+1)%size; // front���� ������Ű�� ť�� ũ��� ������  
	keep=que[front]; // �����ϴ� �� ����  
	que[front]=NULL; // ť�� �� �����  
	flag[front]=0; // �÷��� �迭�� 0 
	
	printf("\n  [ status ] : ������ �� : %c\n\n", keep); // ������ ��(������ ��) ���  
} 

void notice_print() // �ȳ� ǥ�� 
{
	printf("  ������ ���ϴ� ���Ҹ� �Է����ּ���.\n");
	printf("  0�� �Է��ϸ� ���Ұ� pop�˴ϴ�.\n");
	printf("  ���α׷��� �����Ϸ��� 9�� �Է����ּ���.\n\n");
}

void inter_print() // ������ ������� que�迭�� ����ִ� ���� ������ش�. 
{
	printf("      ����ť\n");
	printf("  rear : %d / front : %d \n\n", rear, front); // rear, front ������ �� ���  
	
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

/////////////////////////////////////////////// ���� 
int main()
{
	while(1)
	{
		notice_print(); // �Է����� ����ϱ�  
		printf("  �Է� : ");
		scanf(" %c", &input); // �Է¹ޱ� 
		system("cls"); // ȭ�� �����
		if(input=='9') 
		{
			printf("\n\n  queue is END\n"); // �Է¹��� ���� 9�̸� ���α׷� �����ϱ�  
			return 0; 
		}
		
		else if(input=='0') // �Է¹��� ���� 0 
		{
			if(rear == front) printf("  [ status ] queue is empty!!\n\n"); // rear�����Ϳ� front�����Ͱ� ������ ť�� ����ִٰ� ǥ�� 
			else dequeue(); // �ƴ� ��쿡�� dequeue�Լ� �����ϱ�  
		}
		
		else // �ƴҰ�� 
		{
			if((rear+1)%size==front) printf("  [ status ] queue is full!!\n\n"); // ť�� ��á���� ǥ��  
			else inqueue(input); // �ƴ� ��쿡�� inqueue�� �Է¹��� �� �Ѱ��ֱ� 
		}
		inter_print(); // �Ź� �������̽� ����ϱ�  
	}
	return 0;
}
