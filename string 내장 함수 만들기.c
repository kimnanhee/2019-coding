#include <stdio.h>

void my_strcpy(char* a, char*b)
{
	int i;
	for(i=0; a[i]; i++)
	{
		b[i]=a[i];
	}
}

int my_strlen(char* a)
{
	int i;
	 
	for(i=0; a[i]; i++);
	return i;
}

void my_strcat(char *a, char*b)
{
	int i, start;
	i=start=my_strlen(a);
	
	while(b[i-start] != '\0')
	{
		a[i]=b[i-start];
		i++;
	}
}

int my_strcmp(char* a, char* b)
{
	int i;
	while(a[i] != '\0' || b[i] != '\0')
	{
		if(a[i]>b[i]) return 1;
		else if(a[i]<b[i]) return -1;
		i++;
	}
	return 0;
}

int main()
{
	while(1)
	{
		int num;
		char a[20], b[20];
		
		printf("� ���� �Ͻðڽ��ϱ�?\n");
		printf("1.strcpy 2.strlen 3.strcat 4.strcmp 5.stop\n");
		scanf("%d", &num);
		
		if(num==1)
		{
			scanf("%s", &a);
			my_strcpy(a, b);
			printf("����� ���ڿ��� ����� ���ڿ�: %s\n", a);
		}
		 
		else if(num==2) 
		{
			scanf("%s", &a);
			printf("�Է¹��� ���ڿ��� ���� : %d\n", my_strlen(a));
		}
		
		else if(num==3)
		{
			scanf("%s %s", &a, &b);
			my_strcat(a, b);
			printf("���� ���ڿ� : %s\n", a);
		}
		
		else if(num==4)
		{
			scanf("%s %s", &a, &b);
			printf("�� ���ڿ� �� : %d", my_strcmp(a, b));
		}
		
		else if(num==5) break;
	}
}
