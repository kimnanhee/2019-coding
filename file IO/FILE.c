#include <stdio.h>

void read() // 미리 a.txt파일에 숫자 5개를 쓰고 실행 
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	
	if(fp==NULL) {
		printf("파일 열기 실패");
		return;
	}
	
	int i, a, sum=0;
	for(i=0; i<5; i++)
	{
		fscanf(fp, "%d", &a);
		sum+=a;
	}
	
	if(sum==0) {
		printf("파일에 숫자를 입력하신 후에 실행해주세요.\n");
		return; 
	} 
	printf("파일에 저장되어 있던 값들의 핪 : %d", sum);
	
	fclose(fp);
	return;
}

void write() // 파일에 원하는 문자을 저장해주는 함수 
{
	FILE *fp;
	fp = fopen("a.txt", "w");
	
	if(fp==NULL) {
		printf("파일열기 실패");
		return;
	}
	
	char str[100];
	printf("파일에 저장할 내용을 입력해주세요 : ");
	scanf("%s", str);
	printf("\n\n저장할 내용 : %s", str);
	fprintf(fp, "%s", str);
	
	fclose(fp); 
	return;
}

int main()
{
	printf("원하시는 번호를 입력해주세요.\n\n");
	printf("파일에 내용 입력 : 1\n");
	printf("파일에 있는 숫자 더하기 : 2\n\n");
	
	int num;
	scanf("%d", &num);
	
	if(num==1) write();
	else if(num==2) read();
	
	printf("\n완료");
	return 0;
}
