#include <stdio.h>

int arr[10];
int top=-1;
int i;

void push(int a) {
	if (top==9) printf("���ڰ� �� á���ϴ�.");
	else arr[++top] = a;
}

void pop(void) {
	if(top==-1) printf("������ ����ֽ��ϴ�.");
	else top--;
}

void print() {
	int i;
	for(i=0; i<=top; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() 
{
	push(5);
	print();
	push(3);
	print();
	push(-1);
	print();
	push(0);
	print(); 
	pop();
	print();
	pop();
	print();
	push(0);
	print();
	push(0);
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	push(8);
	print();
	push(11);
	print();
	push(0);
	print();
	push(-1);
	print();
	pop();
	print();
	push(9);
	print();
	
	pop();
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
	pop();
	print();
}
