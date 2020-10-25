#include <stdio.h>
int main() 
{ 
	int a, b, c; 
	float sum=0; 

	scanf("%d %d %d", &a, &b, &c); 
	
	printf("%.2f MB", ((float)a*b*c)/8/1024/1024); 
}
