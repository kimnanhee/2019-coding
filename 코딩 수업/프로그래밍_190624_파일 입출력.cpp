#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
/*
int main()
{
	FILE *src, *desk;
	char buf[256];
	size_t nRead;
	
	src = fopen("Testtt.txt", "rb");
	
	if(src != NULL)
	{
		desk = fopen("Testtt2", "wb");
		{
			if(desk != NULL)
			{
				while(!feof(src))
				{
					nRead = fread(buf, 1.256, src)
					fwrite()
				}
			}		
		}
	}
}
*/

/*
int main()
{
	FILE *f;
	char buf[256];
	
	f=fopen("seek.txt", "rt");
	
	if(f!=NULL)
	{ 
		fseek(f, 24, SEEK_SET); // ó������ 24ĭ �ڿ� ������ ���� ����Ų��.  
		fgets(buf, 256, f); // 
		
		printf("%s", buf);
		
		fclose(f);
	}
	return 0;
}
*/

/*
int compound(int won, double rate, int year)
{
	return (int)(won*pow(1+rate, year));
}
int main()
{
	int money=1000000;
	
	int future=compound(money, 0.04, 10);
	printf("%d�� 10�� �����ϸ� %d�� �Դϴ�.", money, future);
}
*/

int getNum()
{
	return rand()%45+1;
}

int main()
{
	short int lotto[6]={0};
	int i, k, num;
	char dup = 'N';
	srand((unsigned)time(NULL));
	
	for(i=0; i<6; )
	{
		num = getNum();
		for(k=0; k<i; k++)
			if(lotto[k] == num)
				dup = 'Y'; // �ߺ��� ���� �ִ�. 
				
		if(dup == 'N')
			lotto[i++] = num;
		
		else dup = 'N';
	}
	printf("������ �ζ� ��ȣ ==>");
	
	for(i=0; i<6; i++)
		printf("%d ", lotto[i]); 
}











