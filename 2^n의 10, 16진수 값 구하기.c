/*
#include <stdio.h>
#include <math.h> 
int main()
{
	int n, i;
	char c[17], change[17] = "0123456789ABCDEF";

	printf("n�� �Է����ּ��� : ");
	scanf("%d", &n);

	n = pow(2, n);
	printf("\n2^n�� 10���� �� : %d\n", n);

	for (i = 0; n > 0; i++) {
		c[i] = change[n % 16];
		n /= 16;
	}
	printf("2^n�� 16���� �� : ");
	for (i = i - 1; i >= 0; i--) 
			printf("%c", c[i]);

	return 0;
}
*/