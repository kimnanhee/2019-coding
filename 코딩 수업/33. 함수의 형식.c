/*
int a[3]={1, 2, 3};

�迭�� �ּҴ� a

&�� �ּҸ� �Ҥ������� *�� ���� �ҷ��´�.  
 

�Լ��� �Ķ���ʹ� ȣ���ϴ� �Լ��� 
ȣ��Ǵ� �Լ����� ���� �����ؼ� �Ѱ��ش�.
�̷��� ���� �����  call-by-value

�� �Ű����� : ȣ���ϴ� �Լ��� �����ϴ� ��
���� �Ű����� : ȣ��Ǵ� �Լ��� ���޹޴� ��
*/


#include <stdio.h>

/*
int func(int a)
{
	a+=10;
	return a;
}
int main()
{
	int n=0;
	printf("%d", func(n));
	printf("%d", n);
	
	//n��  �� �Ű�����
	// a�� ���� �Ű�����
	
	// call-by-value �����̱� ������ �� �Ű������� ����
	// ���� �Ű������� �����ؼ� �����ϱ� ���� 
}
*/

/*
// call-by-reference ������ ���� ���  
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
} 
int main()
{
	int a=10, b=30; 
	printf("�Լ��� �����ϱ� �� \n");
	printf("a=%d\nb=%d\n\n", a, b); 
	
	swap(&a, &b);
	
	printf("�Լ��� ������ ��\n");
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
*/

// �� �Ű������� ���� �ƴ϶� �ּҸ� �ý� �Ű������ �����Ѵ�.
// �׷��� ������ ���� ������ ���� �ǵ帱 �� �ִ�.  


// ������ ���� �ѱ涧�� ���� �迭�� �ּҸ� �Ѱ��ִ� ���̶�
// call-by-reference �������� ó���� �ȴ�.


void arrfunc(int a[])
{
	int i;
	
	for(i=0; i<5; i++)
		a[i] += 10;
} 
int main()
{
	int arr[5]={1, 2, 3, 4, 5};
	
	arrfunc(arr);
	
	int j;
	
	for(j=0; j<5; j++)
		printf("%d  ", arr[j]);
}




