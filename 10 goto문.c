//goto�� 

#include <stdio.h>

int main()
{
	int a=72, n;
	
	
	start: 
		printf("number? \n");
		
		scanf("%d", &n);
		
		if(n==a)
			printf("����!\n");
			
		else{ 
			printf("����!\n");
			goto start;
			// start��� ���̺��� �ִ°����� �̵�  
			}
	
	return 0;
}





//���α׷��� �⺻������ ���������� ��ɾ� ���� 
//goto���� ���α׷��� ����Ǵ� ������ 
//���Ƿ� �ٲٴ� ����� �Ѵ�. 

//goto���� ������ �Լ� �������� ������ ���� 


#include <stdio.h>

/*
int test()
{
	int i=10;
	this:
		printf("%d", i);
		return 0;
 } 
int main()
{
	goto this;
	return 0;
}
*/

//goto�� ������ ���̺��� 
//goto��ɹ��� ������ �Լ� 
//�ٸ� �Լ��� ��ġ�� �ֱ� ������  
//������ �� ����. 



/*
int main()
//2�� ��� ����ϱ�. 
{
	int i;
	
	for(i=1; i<=10; i++)
		if(i%2==0)
			printf("%d\n", i);
		
	return 0;
 } 
*/
 
 

/* 
int main()
//2�� ���Ȥ�� 3�� ��� ����ϱ�. 
{
	int i;
	
	for(i=1; i<=100; i++)
		if(i%2==0 || i%3==0)
		printf("%d\n", i);
		
	return 0;
}
*/


/*
int main()
//2�� ����̸鼭 3�� ��� ����ϱ�. 
{
	int i;
	
	for(i=1; i<=100; i++)
		if(i%6==0)
		printf("%d\n", i);
		
	return 0;
}
*/


