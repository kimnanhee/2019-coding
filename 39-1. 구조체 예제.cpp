// ����ü�� �̿��ؼ� �̸�, ���� ����, ���� ������ �Է¹ް�
// �̸�, ���� ����, ���� ����, ������ ��, ������ ����� ���
#include <stdio.h>

typedef struct point
{
	char name[20];  
	int korean;
	int english;
	int sum;
	float tmp;
}PP; 

int main()
{
	PP NAN; 
	
	printf("�̸�, ���� ����, ���� ������ ���ʴ�� �Է����ּ���.\n");
	scanf("%s %d %d", &NAN.name, &NAN.korean, &NAN.english);
	
	NAN.sum=NAN.english+NAN.korean;
	NAN.tmp=(float)NAN.sum/2;
	
	printf("�̸� : %s\n", NAN.name); 
	printf("���� ���� : %d\n", NAN.korean); 
	printf("���� ���� : %d\n", NAN.english); 
	printf("���� �� : %d\n", NAN.sum); 
	printf("��� : %.2f\n", NAN.tmp); 
}
