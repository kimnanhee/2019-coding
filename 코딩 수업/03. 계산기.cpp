#include <stdio.h>

int main()
{
	int a, b, sum , minus, multi, divide, modulo;

	printf("�� ���� �Է��Ͻÿ�.");
	
	scanf("%d%d", &a, &b);
	
	sum =a+b;
	minus =a-b;
	multi =a*b; 
	divide =(float)a/b; 
	modulo =a%b;
	
	printf("���� ����� = %d\n", sum);
	printf("��� ����� = %d\n", minus);
	printf("���� ����� = %d\n", multi);
	printf("������ ����� = %d\n", divide);
	printf("�������´� = %d\n", modulo);
}
