#include <stdio.h>

int main()
{
	char a=127;
	short b=32767;
	int c=2147483647;
	long int d=321356;
	long long int e=35135354843;
	float f=4;
	double g=10;
	
	printf("���� (char) = %d\n", a);
	printf("���� (short ) = %d\n", b);
	printf("����(int) = %d\n", c);
	printf("���� (long int) = %ld\n", d);
	printf("���� (long long int) = %lld\n", e);
	printf("�Ǽ� (float) = %f\n", f);
	printf("�Ǽ� (double) = %lf\n", g);
}
