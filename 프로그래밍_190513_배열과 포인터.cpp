#include <stdio.h>
/*
int main()
{
	int a=0;
	int *p=&a;
	
	*p=8;
	printf("%d %d %d %d", &a, p, a, *p);
}
*/
/*
int main()
{
	int arr[3]={1, 2, 3};
	int *p=arr;
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("%d %d\n", *(p+i), *(arr+i));
		printf("%d %d\n", p[i], arr[i]);
	}
	return 0;
}
*/
/*
int main()
{
	int *numPtr; // ������ ���� ����  
	int num=10; // ������ ������ �����ϰ� 10�� ����
	 
	numPtr=&num; // num�� �ּҿ� ������ ������ ����  
	
	*numPtr=20; // num=20;
	
	printf("%d\n", *numPtr);
	printf("%d", num);
	
	return 0;
}
*/
/*
int main() // ���� 2��  �迭��  ���� ����ϱ�  
{
	int arr[5]={10, 20, 30, 40, 50};
	
	int *p=arr;
	
	for(int i=0; i<5; i++)
		printf("%d\n", *(p+i));
		
	printf("\n");
	
	for(int i=0; i<5; i++)
		printf("%d\n", p[i]);
		
	printf("\n");
	
	while(*p) 
		printf("%d\n", *p++);
		
	return 0;
}
*/
/*
int main()
{
	int arr[]={10, 20, 30, 40, 50};
	int *p=arr;
	int sum=0;
	
	for(int i=0; i<5; i++)
	{
		sum+=arr[i];
	}
	printf("%d", sum);
	
	return 0;
} 
*/
/*
int main() // �L�� 4��  
{
	int arr[]={11, 12, 13, 14, 15};
	int *p1, *p2, *p3, *p4, *p5;
	
	p1=&arr[0];
	p2=&arr[1];
	p3=&arr[2];
	p4=&arr[3];
	p5=&arr[4];
	
	printf("%d %d %d %d %d", *p1, *p2, *p3, *p4, *p5);
	return 0;
}
*/
/*
int main() // ���� 5�� �� ���ھ� ����ϱ�  
{
	char *str = "C programming";
	
	for(int i=0; i<14; i++)
		printf("%c\n", *str++);
		
	return 0;
}
*/
/*
int main() // ���� 6�� �Է¹��� ���ڿ��� �ݴ�� ����ϱ�  
{
	char str[100], *p=str;
	scanf("%s", str);
	
	while(*p)
	p++;
	
	p--; 
	while(*p)
	{
		printf("%c", *p);
		p--;
	}
	return 0;
}
*/

int main()
{
	char *str = "I am a student, I am very nice and handsome";
	char str1[100], c;
	char *p=str;
	
	int i=0;
	scanf("%c", &c);
	
	while(*p != '\0')
	{
		if(*p != c)
			str1[i++] = *p;
		p++;	
	}
	printf("%s", str1);
	
	return 0;
 } 
