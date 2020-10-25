#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct _node
{
	int data;
	struct _node* link; 
} node;

// �ڱ� ���� ����ü 
// �ڱ� �ڽ��� �ڷ����� �ٽ� �����Ͽ� �����ϴ� ����ü

node* getNode() // ��带 ���� ����� �Լ�  
{
	node *temp = (node*)malloc(sizeof(node));
	// �޸��� ����� �����ŭ�� �޸𸮸� ���� �Ҵ� ��
	// �׿� ���� �����͸� ��ȯ�ϴ� ����  
	temp->data = 0;
	temp->link = NULL;
	return temp;
}

int main()
{
	node *L = getNode();
	printf("\n (1) create L\n");
	{
		printf("L->data = %d\n", L->data);
		printf("L->link = %d\n", L->link);
		
		printf("L->data's address = %d\n", &L->data);
		printf("L->link's address = %d\n", &L->link);
		
		printf("L's address = %d\n", &L);
		printf("L's value  %d\n", L);
		
		printf("\n");
	}
	
	node *new1 = getNode();
	L->data = 5;
	new1->data = 10;
	
	printf("\n (2) create new1\n");
	{
		printf("new1->data = %d\n", new1->data);
		printf("new1->link = %d\n", new1->link);
		
		printf("new1->data's address = %d\n", &new1->data);
		printf("new1->link's address = %d\n", &new1->link);
			
		printf("new1's address = %d\n", &new1);
		printf("new1's value  %d\n", new1);
			
		printf("\n");
	}
	
	printf("\n (3) create new1\n");
	{
		new1->link=L;
		L=new1;
			
		printf("L's value = %d\n", L); // new1�� ����� �ּ� 
		printf("new1->data's address = %d\n", &new1->data);
		
		printf("%d -> %d\n", L->data, L->link->data);
	}
	
	
	printf("\n (4) insert new2(15) on middle\n");
	{
		node *new2 = getNode();
		new2->data = 15;
		
		node* pre;
		pre=L;
		new2->link=pre->link;
		pre->link=new2;
		
		printf("%d -> %d -> %d\n", L->data, L->link->data, L->link->link->data);
	}
	
	printf("\n (5) insert new3(20) on last\n");
	{
		node *new3 = getNode();
		new3->data=20;
		
		node* tmp = L;
		while(tmp->link!=NULL)
			tmp=tmp->link;
		tmp->link=new3;
		printf("%d -> %d -> %d -> %d\n", L->data, L->link->data, L->link->link->data, L->link->link->link->data);
	}
	printf("\n (6) delete old that first node\n");
	{
		node* old;
		old = L;
		L=old->link;
		free(old);
		
		printf("%d -> %d -> %d\n", L->data, L->link->data, L->link->link->data);
	}
	printf("\n (7) delete old that not first node\n");
	{
		node* old2;
		node* pre2;
		pre2=L;
		old2=pre2->link;
		
		pre2->link=old2->link;
		free(old2);
		old2 = NULL;
		
		printf("%d -> %d", L->data, L->link->data);
	}
	return 0;
}
