//Ȧ���� ¦���� �����ϴ� ���α׷�
 
#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	switch(num%2)
	// switch ���ǹ��� �ܼ��� ������ �ƴ� ���� ���� ����
	 
	{
		case 0:
			printf("even number!!");
			break;
			
		case 1:
			printf("odd number!!");
			break;
			
		default:
			printf("default");
			break;
	}
}
