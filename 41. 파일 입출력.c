#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	int c, no=0;
	char line[100];
	
	fp = fopen("sample.txt", "r");
	if(fp == NULL) printf("파일 열기 실패!\n");
	
	while((c=fgetc(fp)) != EOF)
	{
		putchar(c);
		no++;
	}s
	fclose(fp); 
	// fgetc(fp) 문자 하나씩을 받아오는데 반환값이 정수 
	// EOF : end of file 파일의 끝을 의미  
	
	printf("파일의 글자수 : %d", no);
	
	fp = fopen("sample.txt", "a"); 
	
	fputs("\nthis is test1", fp);
	fputs("\nthis is test2", fp);
	fputs("\nthis is test3", fp);
	fputs("\nthis is test4", fp);
	
	fclose(fp);
	
	printf("\n\n");
	
	fp = fopen("sample.txt", "r");
	
	while(fgets(line, 100, fp) != NULL)
	// fgets(line, 100, fp)
	// 1. line : 읽어들인 문자열을 저장할 배열을 가리키는 포인터
	// 2. 100 : 마지막 NULL문자를 포함해서 읽어들일 수 있는 문자의 최대 문자 수
	// 3. fp : 문자열을 읽어들일 파일 입출력 포인터  
		puts(line);
		
	fclose(fp);
	
	return 0;
}
