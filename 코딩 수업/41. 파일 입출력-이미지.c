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
	// rb read + binary 2진 파일을 안다.
	
	int i, j;
	for(i=0; i<HEADER; i++)
		putc(getc(fp1), fp2);
		// 원본 파일의 헤더 정보를
		// 새로 만들 파일에 삽입한다.  
	
	for(i=0; i<HEIGHT; i++)
		for(j=0; j<WIDTH; j++)
		{
			B[i][j] = getc(fp1);
			G[i][j] = getc(fp1);
			R[i][j] = getc(fp1);
			// 색상 데이터 가져오기 
			// 하나하나가 24비트  
		}
	
	for(i=0; i<HEIGHT; i++)
		for(j=0; j<WIDTH; j++)
		{
//			B[i][j] = 0; // B를 싹 날림  
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
		
	printf("편집된 파일을 저장했습니다!!\n");
	puts("debug test");
	return 0; 
}

