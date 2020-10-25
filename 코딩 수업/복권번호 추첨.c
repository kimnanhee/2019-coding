#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user_input(int input[]);
void make_number(int lotto[]);
int check_number(int input[], int lotto[]);
void result(int n);

int main()
{	
	int lotto[6]={0}, input[6]={0};
	int i, count=0;
	
	user_input(input); 
		
	make_number(lotto);
	
	printf("���ǹ�ȣ : ");
	for(i=0; i<6; i++)
		printf("%d ", lotto[i]); // ���ǹ�ȣ ����ϱ� 
	
	count=check_number(input, lotto); 
	
	printf("\n%d���� ��ȣ ��ġ\n", count);
	
	result(count);
	
	return 0;
}

void user_input(int input[]) // ����� ���� �Է¹ޱ� 
{
	int i, j, select=1;
	printf("��ġ�� ���ڰ� ������ 6���� �Է����ּ���.(1~45)\n");
	while(select) // user �Է¹ޱ�  
	{
		for(i=0; i<6; i++)
			scanf("%d", &input[i]);
		select=0;
		for(i=0; i<6; i++)
		{
			if(input[i]<1 || input[i]>45) 
			{
				select=1;
				break;
			}
		}
		if(select==0) break;
		printf("\n�Է��Ͻ� ���ڰ� �����ʽ��ϴ�.\n");
		printf("���ڸ� �ٽ� �Է����ּ���.\n");
	}
	printf("\n----------------------------------\n\n");
	return;
}
void make_number(int lotto[]) // ���� ��ȣ �����ϱ� 
{
	int i, j;
	srand(time(NULL));
	for(i=0; i<7; i++)  
	{
		lotto[i]=(rand()%45+1); // 1~45������ ���� ���� ���� 
		
		for(j=0; j<i; j++)
		{
			if(lotto[i]==lotto[j]) // ��ģ��ȣ�� ������ �ٽ� ����� 
			{
				i--;
				break;
			}
		}
	}
	return;
}
int check_number(int input[], int lotto[]) // �Է¹��� ���� �ζǰ��� ��ġ�ϴ��� Ȯ�����ش�. 
{
	int i, j, cnt=0;	
	for(i=0; i<6; i++)
		for(j=0; j<i+1; j++)
		{
			if(input[i]==lotto[j]) // ��ġ�ϸ� cnt���� ���� 
				cnt++;
		}
	return cnt;
}
void result(int n) // ����Լ� 
{
	switch(n) // ����n�� ���� ��� ����ϱ� 
	{
		case 0:
		case 1:
		case 2:
			printf("\n\n�ƽ����� ������ �������ּ���ФФ�");
			break;
		case 3:
			printf("\n\n���ϵ帳�ϴ�!\n");
			printf("3���� ��ȣ�� ��ġ�ؼ� 4� ��÷�Ǽ̽��ϴ�!");
			break;
		case 4:
			printf("\n\n���ϵ帳�ϴ�!\n");
			printf("4���� ��ȣ�� ��ġ�ؼ� 3� ��÷�Ǽ̽��ϴ�!\n");
			break;
		case 5:
			printf("\n\n���ϵ帳�ϴ�!\n");
			printf("5���� ��ȣ�� ��ġ�ؼ� 2� ��÷�Ǽ̽��ϴ�!");printf("\n");
			break;
		case 6:
			printf("\n\n���ϵ帳�ϴ�!\n");
			printf("6���� ��ȣ�� ��� ��ġ�ؼ� 1� ��÷�Ǽ̽��ϴ�!");
			break;
	}
	return;
}
