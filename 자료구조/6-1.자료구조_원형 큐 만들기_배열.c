#include <stdio.h>

int arr[4];
int front=0, rear=0; 
int i; 

void enqueue(int a) {
	rear++;	
	rear%=4; 
	arr[rear] = a;
}
void dequeue() {
	front++;
	front%=4;
}
void print()
{
	if(rear==front) 
	{
		puts("overflow");
		return;
	}
	else 
	{
		for(i=0; i<4; i++)
		{
			if(rear>front)
			{
				if(i<=front) printf("   ");
				else 
				{
					if(i>rear) printf("   ");
					else printf("%3d", arr[i]);
				}
			}
			else 
			{
				if(i<=rear) printf("%3d", arr[i]);
				else 
				{
					if(i<=front) printf("   ");	
					else printf("%3d", arr[i]);
				}
			}
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
