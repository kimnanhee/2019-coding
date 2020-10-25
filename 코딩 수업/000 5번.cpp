#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	if (a>3199) printf("¸¶ÀÌÂé, ÄÜÄ¨, Æä·Î·Î·Î½¦, ºóÃ÷");
	
	else if (a>2499) printf("¸¶ÀÌÂé, ÄÜÄ¨, Æä·Î·Î·Î½¦");
	
	else if (a>1499) printf("¸¶ÀÌÂé, ÄÜÄ¨");
	
	else if (a>699) printf("¸¶ÀÌÂé");
	
	return 0;
}
