#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d %d %d",((a<b ? a:b)<c ? (a<b ? a:b) : c), (a<b) ? ((a>c) ? a:(b>c) ? c:b) : (b>c) ? b : ((a<c) ? a : c), ((a>b ? a:b)>c ? (a>b ? a:b) : c));
	
//	printf("%d", (a<b) ? ((a>c) ? a:(b>c) ? c:b) : (b>c) ? b : ((a<c) ? a : c));
	
	return 0;
}
