#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	int c, no=0;
	char line[100];
	
	fp = fopen("sample.txt", "r");
	if(fp == NULL) printf("���� ���� ����!\n");
	
	while((c=fgetc(fp)) != EOF)
	{
		putchar(c);
		no++;
	}s
	fclose(fp); 
	// fgetc(fp) ���� �ϳ����� �޾ƿ��µ� ��ȯ���� ���� 
	// EOF : end of file ������ ���� �ǹ�  
	
	printf("������ ���ڼ� : %d", no);
	
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
	// 1. line : �о���� ���ڿ��� ������ �迭�� ����Ű�� ������
	// 2. 100 : ������ NULL���ڸ� �����ؼ� �о���� �� �ִ� ������ �ִ� ���� ��
	// 3. fp : ���ڿ��� �о���� ���� ����� ������  
		puts(line);
		
	fclose(fp);
	
	return 0;
}
