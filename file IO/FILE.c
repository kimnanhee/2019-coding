#include <stdio.h>

void read() // �̸� a.txt���Ͽ� ���� 5���� ���� ���� 
{
	FILE *fp;
	fp = fopen("a.txt", "r");
	
	if(fp==NULL) {
		printf("���� ���� ����");
		return;
	}
	
	int i, a, sum=0;
	for(i=0; i<5; i++)
	{
		fscanf(fp, "%d", &a);
		sum+=a;
	}
	
	if(sum==0) {
		printf("���Ͽ� ���ڸ� �Է��Ͻ� �Ŀ� �������ּ���.\n");
		return; 
	} 
	printf("���Ͽ� ����Ǿ� �ִ� ������ �D : %d", sum);
	
	fclose(fp);
	return;
}

void write() // ���Ͽ� ���ϴ� ������ �������ִ� �Լ� 
{
	FILE *fp;
	fp = fopen("a.txt", "w");
	
	if(fp==NULL) {
		printf("���Ͽ��� ����");
		return;
	}
	
	char str[100];
	printf("���Ͽ� ������ ������ �Է����ּ��� : ");
	scanf("%s", str);
	printf("\n\n������ ���� : %s", str);
	fprintf(fp, "%s", str);
	
	fclose(fp); 
	return;
}

int main()
{
	printf("���Ͻô� ��ȣ�� �Է����ּ���.\n\n");
	printf("���Ͽ� ���� �Է� : 1\n");
	printf("���Ͽ� �ִ� ���� ���ϱ� : 2\n\n");
	
	int num;
	scanf("%d", &num);
	
	if(num==1) write();
	else if(num==2) read();
	
	printf("\n�Ϸ�");
	return 0;
}
