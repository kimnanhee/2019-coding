/*
����ü => structure
// ���� ���� �������� �������� �̷���� ����
// �پ��� Ÿ���� �������� ��� ���ο� Ÿ������ ������ �� �ִ�.

�迭�� �ٸ� ��?? => �迭�� ������ �ڷ����� ���� 

�����
����ü��(Ÿ��)�� �����Ѵ� > ����ü ������ �����Ѵ�
����� ��Ḧ �غ��Ѵ� > ������� �����  
*/

#include <stdio.h>

struct ex1 
{
	int a;
	float b;
	char c;
	char d[5];	
};
// ����ü�� ���鶧 struct��� ����ü ���� 
// ������ ����. ����ü�� �̸��� ����� ����
// ����ü ��� ������ �پ��ϰ� ������ �� �ִ�. 

// ����ü ����� .(���� ��� ���� ������)�� ���� ����  
	
struct ex1 dsm1;
struct ex1 dsm2;
	
int main()
{
	dsm1.a=10; 
	dsm1.b=4.5; 
	dsm2.a=20; 
	dsm2.b=9.5;
	
	printf("dsm1.a = %d\n", dsm1.a); 
	printf("dsm1.b = %f\n", dsm1.b); 
	printf("dsm2.a = %d\n", dsm2.a); 
	printf("dsm2.b = %f\n", dsm2.b); 
	
//	if(dsm1.a==dsm2.a && dsm1.b==dsm2.b)
//		printf("same!!\n");
//	else printf("different!!\n");
	
	// if(dsm1==dsm2) printf("same");
	// ����ü ��ü�� �񱳳� ������ �� �� ����.
	
	// ����ü ��ü�� ������ �����ϴ�. 
	
	struct ex1 dsm3;
	dsm3=dsm2;
	printf("dsm3.a = %d\n", dsm3.a); 
	
	// ����ü ������ ����� ���ÿ� �ʱ�ȭ ���� 
	struct ex1 dsm4;
	dsm4 = {5, 10.8, 'f', {4, 5, 6, 7, 8}};
	
	int i;
	for(i=0; i<5; i++)
		printf("dsm4.d[%d] = %d\n", i, dsm4.d[i]);
	
	printf("dsm4.a = %d\n", dsm4.a); 
	printf("dsm4.b = %f\n", dsm4.b); 
	printf("dsm4.c = %c\n", dsm4.c); 
	
	return 0; 
}







