#include <stdio.h>

int main()
{
	int a, b, sum , minus, multi, divide, modulo;

	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À.");
	
	scanf("%d%d", &a, &b);
	
	sum =a+b;
	minus =a-b;
	multi =a*b; 
	divide =(float)a/b; 
	modulo =a%b;
	
	printf("µ¡¼À °á°ú´Â = %d\n", sum);
	printf("¹ë¼À °á°ú´Â = %d\n", minus);
	printf("°ö¼À °á°ú´Â = %d\n", multi);
	printf("³ª´°¼À °á°ú´Â = %d\n", divide);
	printf("³ª¸ÓÁö´Â´Â = %d\n", modulo);
}
