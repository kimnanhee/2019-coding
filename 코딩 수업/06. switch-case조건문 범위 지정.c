//	switch-case���ǹ� ���� ����  
#include <stdio.h>

int main()
{
	int value;
	
	printf("100 �̸��� �ڿ����� �Է��ϼ��� : \n");
	scanf("%d", &value);
	switch(value)
	{
		case 0 ... 50:
			printf("50�����Դϴ�."); //	 a ... b�� a���� b������ ���� �ǹ��Ѵ�. 
			break; 
			
		case 51 ... 99:
			 printf("50�̻��Դϴ�.");
			 break;
			 
		default : 
			printf("�߸� �Է��Ͽ����ϴ�.");
	}
	return 0;
} 
