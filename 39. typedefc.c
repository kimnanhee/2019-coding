/*
[typedef Ȱ��]

Ÿ���� ���Ӱ� ������ �� ����.

typedef�� ����ϸ� ������ ����ϴ� 
������ Ÿ�Կ� ���ο� �̸��� ���� �� �ִ�. 

[format]
typedef�� ������������ ���ο������ �̸�; 
*/


#include <stdio.h>
typedef char* word;
// char* �̶�� �ڷ����� word��� �ڷ������� ���Ӱ� ���� 
 
/*
struct point
{
	int x;
	int y;
}; 
typedef struct point PPAP;
// ����ü�� �����  
// ����ü�� Ÿ���� ���ο� Ÿ������ ���� 
*/
 
typedef struct point
{
	int x;
	int y; 
}PPAP; 
// struct point ��� Ÿ���� ����ü�� PPAP�ڷ������� ����  

int main()
{
	char* t = "hello";
	word c = "Oh";
	
	printf("%s\n", t);
	printf("%s\n", c);
	
//	struct point dsm1;
	PPAP dsm1;
	dsm1.x = 20;
	
	printf("dsm1.x = %d\n", dsm1.x);
	
	return 0; 
}
