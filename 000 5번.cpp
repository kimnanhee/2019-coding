#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	if (a>3199) printf("������, ��Ĩ, ��ηην�, ����");
	
	else if (a>2499) printf("������, ��Ĩ, ��ηην�");
	
	else if (a>1499) printf("������, ��Ĩ");
	
	else if (a>699) printf("������");
	
	return 0;
}
