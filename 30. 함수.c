/*
	�Լ�
	���п���  �Լ��ʹ� �ٸ��� ��ǻ�Ϳ��� �Լ��� '���'�� ������ �ִ�. 
	
	�Լ��� ���� ��� 
	��ȯ�� �Լ� �̸�(�Ű�����)
	{
		���� ���� ����;
		�Լ��� �ٵ� �κ�;
		return ��;
	}
	��ȯ�� : �Լ��� ��������� ������ ���� �ڷ���  
		int, float, void(��ȯ�� �� �Ѵ�.)
		
	�Լ� �̸� : �Լ��� ����� �������� �ľ��� �ǵ��� ���̹��� �ؾ� �Ѵ�. 
				������Ʈ ������ ���� �� �� �߿��� ���
	
	�Ű�����(�Ķ����) 
	
	�������� ���� : �Լ� �������� ����ϴ� ���� 
	
	return �� : �Լ��� ��ȯ���� �����ϰ� ���� ����.
				void�Լ��� return;�� ����ϸ� �ȴ�. 
				
	���α׷��ֿ��� �Լ��� ����ϴ� ���� : �Լ��� �����ϰ� ������ �°� ����ϱ� ���ؼ�.
*/

// 1. �ݺ��Ǵ� ���� �ܼ� ����  
/*
#include <stdio.h>

void printstar()
{
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("\n");
} 

int main()
{
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("\n");
	
	printstar();
	
	return 0;
}
*/

// 2. ���� ���޹޾Ƽ� �����ϴ� �Լ� 

#include <stdio.h>

void printstar(int count)
{
	int i;
	for(i=0; i<count; i++)
	{
		printf("  *  \n");
		printf(" *** \n");
		printf("*****\n");
		printf("\n");
	}
} 
int main()
{
	int no;
	scanf("%d", &no);
	printstar(no);
	
	return 0;
}

/*
// 3. ���� �� ���� ��ȯ�ϴ� �Լ� 
#include <stdio.h>
int add(int a, int b)
{
	return a+b;
} 
int main()
{
	int i, j, sum;
	scanf("%d %d", &i, &j);
	sum=add(i, j);
	
	printf("%d", sum);
}
*/
