#include <stdio.h>
char change[17] = "0123456789ABCDEF";
int sixteen_ten(char s[])
{
	int i, sum = 0;
	for (i = 0; s[i]; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 10;

		else if (s[i] >= '0' && s[i] <= '9')
			s[i] -= '0';

		sum = (sum * 16) + s[i];
	}
	return sum;
}
int ten_sixteen(long long int n, char s[])
{
	int i;
	for (i = 0; i < 8; i++) s[i] = '0';
	for (i = 0; n > 0; i++)
	{
		s[i] = change[n % 16];
		n /= 16;
	}
	return i;
}
int main()
{
	long long int i, cnt, one_i, two_i;
	char one[32], two[32], AND[8], OR[8], XOR[8];

	printf("비트 연산을 수행할 수를 16진수 형태로 입력하시오 : ");
	scanf("%s %s", one, two);

	one_i = sixteen_ten(one);
	two_i = sixteen_ten(two);

	cnt = ten_sixteen(one_i & two_i, AND);
	printf("\nBit AND : 0x");
	for (i = cnt - 1; i >= 0; i--) printf("%c", AND[i]);
	for (i = 7 - cnt; i >= 0; i--) printf("0");

	cnt = ten_sixteen(one_i | two_i, OR);
	printf("\nBit OR : 0x");
	for (i = cnt - 1; i >= 0; i--) printf("%c", OR[i]);
	for (i = 7 - cnt; i >= 0; i--) printf("0");

	cnt = ten_sixteen(one_i ^ two_i, XOR);
	printf("\nBit XOR : 0x");
	for (i = cnt - 1; i >= 0; i--) printf("%c", XOR[i]);
	for (i = 7 - cnt; i >= 0; i--) printf("0");

	return 0;
}