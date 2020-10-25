#include <stdio.h>

int arr[10];
int front=-1; rear=-1;

void enqueue(int a)
{
	if(rear==9) printf("overflow");
	arr[++rear] = a; 
}
void dequeue()
{
	front++;
}
void print()
{
	int i;
	for(i=0; i<=rear; i++)
	{
		if(i<=front) printf("   ");
		else printf("%3d", arr[i]);
	}
	printf("\n");
}
int main()
{
	enqueue(5);
	print();
	enqueue(3);
	print();
	dequeue();
	print();
	enqueue(-1);
	print();
	enqueue(8);
	print();
	dequeue();
	print();
	dequeue();
	print();
	dequeue();
	print();
}
