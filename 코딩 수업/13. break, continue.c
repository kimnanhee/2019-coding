/*
for, while, do-while�� ���� ������
switch-case �������� ���� �� break ��ɹ��� ������ 
'�ڽ��� �����ϰ� �ִ� ����' ����������.


������ ���������� �� �Ӹ� �ƴ϶�
�ƿ� ���� �ȿ��� ���α׷��� �����Ű�� ��������
return 0; 


for(i=0; i<n; i++)
	if(i==1)
		break;
if������ �����ϸ� for���� ��������
break���� ������ ���������� ����
if���� ���������� ���� �ƴ�


for(i=0; i<10; i++)
	for(j=0; j<10; j++)
		if(j==1)
			break; 
if������ �����ϸ� for���� ��������


continue
for, while, do-while�� ���� ���� ������ ���๮����
continue��ɹ��� ������ 
�� ������ ������� �˻����� �ʰ� ���� ���� �˻� �������� ����. 
*/

#include <stdio.h>

/*
int main()
{
	int i, sum=0;
	
	for(i=0; i<10; i++)
	{
		if(i%2==0)
			continue;
		sum += i;
	}
	printf("sum = %d", sum);
	
	return 0;
}
*/

/*
int main()
{
	int i=0, sum=0;
	
	while(i<10)
	{
		if(i==5) continue;
		printf("i == %d\n", i);
		sum+=i;
		i++;
	}
	printf("sum = %d", sum);
	
	return 0;
} 
while������ �ε��� ���� �÷��ִ� ��ɹ��� ���� ��� �ϱ� ������
continue�� ���� ���ѷ����� �����ʵ��� �����ؾ� �Ѵ�.
*/

/*
int main()
{
	int i=1;
	
	while(i<5)
	{
		i++;
		if(i==3)
//			break;
			continue;
		printf("%d check!\n", i);
	}
	printf("finish");
	
	return 0;
 } 
*/
 
 int main()
 {
 	int a;
 	
 	while(1)
 	{
		printf("a�� ���� �Է��Ͻÿ�.");
		
		scanf("%d", &a);
		
		switch(a)
		{
			case 1: printf("1\n");
				break;
				
			case 3: printf("3\n");
				continue;
				
			default: printf("0\n");
		}
	}
 }
// switch�� continue���� ����� ����. 
 
 
 
 
