/* 
#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(int)); //256������ ���ڸ� ���� �� �ִ�.  
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float)); //ǥ���� �� �ִ� ���е��� ���Ǹ� ������ �ִ�. 
	printf("%d\n", sizeof(double));
//	sizeof �����ڸ� �̿��ؼ� �ڷ����� ũ�� ���.
	
	return 0;
}
*/


/*
#include <stdio.h>

int main() //	���� �ϳ��� �Է¹޾Ƽ� �� ���� 10�� ���ؼ� ����ض�. 
 {
 	int a;
 	
 	scanf("%d", &a); //	&�� �ּҸ� �ǹ��ϴ� ǥ��  
 	printf("%d", a*10);
 }
*/


/*
#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);
	printf("%d\n", a); //	%d�� 10����  
	printf("%o\n", a); //	%o�� 8����  
	printf("%x\n", a); //	%x�� 16����  
	printf("%X\n", a); //	%X�� 16������ �빮�ڷ� ��µȴ�. 
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", a%b);
	//	�� ���� �Է¹޾Ƽ� �� ����ϱ�. 
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("�簢���� ���̴� : %d", a*b);
	
	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("�� : %d\n", a+b);
	printf("�� : %d\n", a-b);
	printf("�� : %d\n", a*b);
	printf("�� : %d\n", a/b);
	
	printf("�� : %f\n", (float)a/b);
	//	�� ���� �Է¹޾Ƽ� ��Ģ�����ϱ�.  
	
	return 0;
} 
*/


/*
#include <stdio.h>

int main
{
	float f;
	double d, e1, e2;
	
	float f = 3.1415926535897932384626;
	double d = 3.1415926535894932384626;
	double e1 = 0.56789;
	double e2 = 234.56789;
	
	printf("%f\n", f);	
	printf("%.10f\n", f);	
	printf("%lf\n", d);	
	printf("%.20lf\n", d);	
	printf("%e\n", e1);	
	printf("%e\n", e2);	
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	printf("%c\n", 65);
	printf("%c\n", 0101 + 1);
	printf("%c\n", 0x41 + 1);
	printf("%c\n", 'A');
	printf("%c\n", '\101' + 1);
	printf("%c\n", '\x41' + 1);
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	const int con = 10;
	printf("%d\n", 10);
	
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d",&a, &b);
	
	printf("%d", a<<b); 
	//	<<�� ����Ʈ �����̴�. a�� b�� ����ŭ �������� ����Ʈ�ض�. 
	//	�������� ����Ʈ�ϸ� 2�� ��������.
	
	return 0; 
} 
*/


#include <stdio.h>

int main()
{
	printf("%d\n", 1 & 1); //	1
	printf("%d\n", 1 & 0); //	0
	printf("%d\n", 0 & 1); //	0
	printf("%d\n", 0 & 0); //	0
	printf("%d\n", 2 & 3); //	2
}









