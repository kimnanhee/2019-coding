// ����ü�� �Ķ���ͷ� ������ �Լ� 

#include <stdio.h>

struct point // ����  
{
	int x;
	int y; // ��� ���� 2��  
};

void print(struct point a) 
{
	printf("%d %d\n", a.x, a.y);
}

struct point add(struct point b)
{
	b.x += 10;
	b.y += 20;
	return b;
}

int main()
{
	struct point d1 = {50, 60}, d2;
	d2 = add(d1);
	print(d2);
} 
