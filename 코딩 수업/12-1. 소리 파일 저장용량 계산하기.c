#include <stdio.h>

int main()
{
	int a, b, c, d;
	double i=0;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	i=((double)a*b*c*d)/8/1024/1024;
	
	printf("%.1lf MB", i);
}
