/*
#define
'��ó������ ������'�� Ȱ��
��ũ�� ����� ��ũ�� �Լ��� ���� �� �ִ�. 
*/


#include <stdio.h>
#define PI 3.14 // ��ũ�� ��� 
// PI�� 3.14�� ġȯ  
#define mul(x) x*x
#define swap(x, y) {int t; t=x; x=y; y=t;}
#define pnt(x) printf(#x"=%d\n", x)
// ��ũ�� �Լ��� ����� ������� ���� ������
// � ���� ������ �� ��ũ�θ� �����ϸ� �ȴ�.   

int main()
{
	//	PI=4; // ��ũ�� ����� ���� �ٲܼ� ����.  

	int num2=6;
	pnt(num2+3);
	 
	printf("%f\n", PI);
	
	int num=4;
	printf("%d", mul(num));
} 

