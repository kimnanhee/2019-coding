#include <stdio.h>

#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54

unsigned char R[HEIGHT][WIDTH];
unsigned char G[HEIGHT][WIDTH];
unsigned char B[HEIGHT][WIDTH];

int main()
{
	FILE *fp1 = fopen("1024x768.bmp", "rb");
	FILE *fp2 = fopen("1024x768_1.bmp", "wb");
	// rb read + binary 2�� ������ �ȴ�.
	
	int i, j;
	for(i=0; i<HEADER; i++)
		putc(getc(fp1), fp2);
		// ���� ������ ��� ������
		// ���� ���� ���Ͽ� �����Ѵ�.  
	
	for(i=0; i<HEIGHT; i++)
		for(j=0; j<WIDTH; j++)
		{
			B[i][j] = getc(fp1);
			G[i][j] = getc(fp1);
			R[i][j] = getc(fp1);
			// ���� ������ �������� 
			// �ϳ��ϳ��� 24��Ʈ  
		}
	
	for(i=0; i<HEIGHT; i++)
		for(j=0; j<WIDTH; j++)
		{
//			B[i][j] = 0; // B�� �� ����  
//			G[i][j] = getc(fp1);
			R[i][j] = 100;
		}
	
	for(i=0; i<HEIGHT; i++)
		for(j=0; j<WIDTH; j++)
		{
			putc(B[i][j], fp2);
			putc(G[i][j], fp2);
			putc(R[i][j], fp2);
		}
		
	printf("������ ������ �����߽��ϴ�!!\n");
	puts("debug test");
	return 0; 
}

