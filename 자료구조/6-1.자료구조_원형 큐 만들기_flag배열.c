#include <stdio.h>

int arr[4], flag[4]={0}; // 값이 들어있는 배열과 이 배열에 값의 유무의 배열  
int front=0, rear=0; 
int i; 

void enqueue(int a) { // 큐에 값을 넣고 flag배열에 값이 있음을 의미하는 1대입  
	rear++;	
	rear%=4; 
	arr[rear] = a;
	flag[rear]=1;
}
void dequeue() { // front의 값을 증가시키고 flag배열에 값이 없다는 0을 대입 
	front++;
	front%=4;
	flag[front]=0;
}
void print()
{
	if(rear==front) // 큐가 꽉 찼으면 찼다고 표시한다, 
	{
		puts("overflow");
		return;
	}
	else // flag배열에는 arr배열에 내용이 들어있는지 알 수 있다. 
	// flag배열에 값이 1일때만 arr배열의 값을 출력  
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
