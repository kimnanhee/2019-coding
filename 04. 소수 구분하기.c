#include <stdio.h>

int main
{
	int num;
	
	scanf("%d", &num);
	
	switch(num)
	{
		case 2:
		case 3:
		case 5:
		case 7:
		case 11:
			
		//case ��ɹ��� �ִ� ���� �����̸�
		//��ɹ��� break���� ���� ������ �Ʒ��� �������鼭 ������ ����
		
			printf("prime number!!");
			break;
		default:
			printf("�Ҽ��� �ƴҼ���!!");
	}
	return 0;
 } 
