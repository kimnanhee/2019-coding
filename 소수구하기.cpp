#include <stdio.h>

int main()
{
	int num=0;
	int a=2;
	
	printf("������ �Է��ϼ� : ");
	scanf("%d", &num);
	
	while( a < num ) {
		if( num % a == 0 ) {
			printf("�Է��� �� %d �� %d �� ������������ �Ҽ��� �ƴմϴ�.", num, a );
			return 0;
		}
		a++;
	}
	printf("�Է��� �� %d �� ���������� �������� �Ҽ��Դϴ�", num);
	return 0;
}
