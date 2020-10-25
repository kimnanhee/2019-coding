#include <stdio.h>

int arr[4], flag[4]={0}; // ���� ����ִ� �迭�� �� �迭�� ���� ������ �迭  
int front=0, rear=0; 
int i; 

void enqueue(int a) { // ť�� ���� �ְ� flag�迭�� ���� ������ �ǹ��ϴ� 1����  
	rear++;	
	rear%=4; 
	arr[rear] = a;
	flag[rear]=1;
}
void dequeue() { // front�� ���� ������Ű�� flag�迭�� ���� ���ٴ� 0�� ���� 
	front++;
	front%=4;
	flag[front]=0;
}
void print()
{
	if(rear==front) // ť�� �� á���� á�ٰ� ǥ���Ѵ�, 
	{
		puts("overflow");
		return;
	}
	else // flag�迭���� arr�迭�� ������ ����ִ��� �� �� �ִ�. 
	// flag�迭�� ���� 1�϶��� arr�迭�� ���� ���  
	{
		for(i=0; i<4; i++)
		{
			if(flag[i]==1) printf("%3d", arr[i]);
			else printf("   ");
		}
		printf("\n");
	}
}

int main()
{
	enqueue(5);
	print();                                                                                                                                                               
	enqueue(8);
	print();
	enqueue(-1);
	print();
	dequeue();
	print();
	dequeue();
	print();
	enqueue(7);
	print();
	enqueue(9);
	print();
	enqueue(10);
	print();
	
	return 0;
}
