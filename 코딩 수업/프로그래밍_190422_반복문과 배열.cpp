#include <stdio.h>

/*
int main()
// E�� �Է� �ɶ����� ���� ���  
{
	char a;
	
	while(1)
	{
		printf("I: �߰� D: ���� S: �˻� L: ��ü ��� E: ����\n"); 
		printf("�޴� ����:"); 
		
		scanf(" %c", &a);
		
		if(a=='I' || a== 'i') printf("�߰�\n");
		
		else if(a=='D' || a== 'd') printf("����\n");
		
		else if(a=='S' || a== 's') printf("�˻�\n");
		
		else if(a=='L' || a== 'l') printf("��ü ����\n");
		
		else if(a=='E' || a== 'e') break;
		
		else printf("�߸� �����ϼ̳׿�\n");
	}
	return 0;
}
*/


/*
int main()
// �迭 �����ؼ� ���� ����ϱ�  
{
	int score[3] = {80, 60, 90};
	
	printf("���� ���� : %03d\n", score[0]);
	printf("���� ���� : %03d\n", score[1]);
	printf("���� ���� : %03d\n", score[2]);
	
	return 0; 
} 	
*/


/*
int main()
// �迭 for������ ����ϱ�  
{
	int i;
	
	int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for(i=0; i<10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
} 
*/

/*
int main()
{
	int arr[10] = {1,};
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/


/*
int main()
// �迭���� ������ ���ϰ�, ����� ���ϱ�  
{
	int i;
	int sum=0;
	
	int numarr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for(i=0; i<10; i++)
	{
		sum+=numarr[i];
	}
	printf("���� : %d\n", sum);
	
	printf("��� : %d", sum/10);
	
	return 0;
}
*/


/*
int main()
// ���� �迭�� ���� 2�辿 ���ؼ� ���  
{
	int i;
	int sum=0;
	
	int numarr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for(i=0; i<10; i++)
	{
		sum+=numarr[i];
	}
	printf("���� : %d\n", 2*sum);
	
	printf("��� : %d", (2*sum)/10);
	
	return 0;
}
*/


/*
int main()
// ���� �ϳ� �Է� �޾Ƽ� 2������ ����ϱ�  
{
	int a, i;
	int arr[31] = {0};
	
	scanf("%d", &a);
	
	for(i=31; i>=0 && a!=0; i--)
	{
		arr[i] = a%2;
		a = a/2;
	}
	
	for(i=0; i<32; i++)
		printf("%d", arr[i]);
	
	return 0;
} 
*/

/*
int main()
// 2������ �Է� �޾Ƽ� 10������ ��� 
{
	int i, sum=0;
	int arr[4] = {0, 0, 1, 1};
	
	for(i=3; i>=0; i--)
	{
		if(arr[i] == 1)
		{
			sum += 1 << (4-i);
		}
 	}
	printf("%d", sum);
	
 	return 0;
} 
*/
