#include <stdio.h>
// stdio.h�� ǥ�� ����� ���̺귯�� ��� ������ ���Խ�Ų��.
// stdio.h => scanf(), printf(), etc... �̷����� ����ִ�. 
// ��� ������ ���� ���Ѿ� ������� �� �� �ִ�. 

int main; // ���α׷����� ������ 
{ 
	//scope�� ���۹���  
	int a;
	//a��� �̸��� ���� ���� ������ �޸𸮿� ����ڴٰ� �Ҵ��ϰ� ���� 
	
	scanf("%d", &a);
	// ������ ������ �Է¹޾� a��� ������ �޸��� �ּҸ� ã�Ƽ�
	// �� ���� ����ڰ� �Է��� ���� ����  
	
	if(a>0)
		printf("positive number\n");
		
	else if(a==0)
		printf("zero\n");
		
	else(a<0)
		printf("negative number\n");
		
	// if �� - else if �� - else �� 
	
	// if ���ǹ��� ���̸� �� ��ɹ� ����  
	
	// if ���ǹ��� �����̰� else if���ǹ��� ���̸� �� ��ɹ� ����
	
	// if, else if ��ɹ��� ��� �����̸� else ��ɹ� ���� 
	  
		
	switch(a++>0)
	{
		case 1:
			printf("big\n");
			break;
			
		case 0:
			printf("small\n");
			break;
			
		dafault:
			printf("zero\n");
	} 
	// swich ���ǹ��� ��Ÿ���� ���� ���� �ش��ϴ� case�� ��ȯ�Ǿ� ��ɹ� ����
	
	// break�� ������ �ش� ��ɹ��� �����ϰ� ���� 
	
	// case�� ��� �ش���� ������ dafault�� �ִ� ��ɹ� ����  
	
	printf("but 'a' is ... %d", a);
	// a�� ���� ��� 
	
	return 0;
}
