#include <stdio.h>

int main()
{
	int a, b, c;
	double d;
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("�� : %d\n", a+b+c);
	
	d = a+b+c;
	
	printf("��� : %.3f\n", (float)d/3);
	
	return 0;
}
