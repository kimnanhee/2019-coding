#include <stdio.h>
#include <stdlib.h> 

typedef struct node_struct{
	int data;
	struct node_struct *left;
	struct node_struct *right;
}node;
// �ڱ� ���� ����ü 

node* insert_node(node* root, int value)
{
	if(root==NULL)
	{
		root=(node *)malloc(sizeof(node));
		root->left = root->right = NULL;
		root->data = value;
	}
	else 
	{
		if(root->data > value) root->left = insert_node(root->left, value);
		else root->right = insert_node(root->right, value);
	}
	return root;
} 

void pre(node* root) // Ʈ�� ����ϱ� : ������ȸ  
{
	if(root)
	{
		printf("%d ", root->data);
		pre(root->left);
		pre(root->right);
	}
}

void ino(node* root)
{
	if(root)
	{
		ino(root->left);
		printf("%d ", root->data);
		ino(root->right);
	}
}

void pos(node* root)
{
	if(root)
	{
		pos(root->left);
		pos(root->right);
		printf("%d ", root->data);
	}
}
int main()
{
	printf("Ʈ���� ������ ���ڸ� �Է����ּ���.\n");
	printf("-1�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n\n");
	
	node *root = NULL;
	while(1)
	{
		int num;
		scanf("%d", &num);
		
		if(num==-1) break;
		root = insert_node(root, num);
	}
	
	printf("\n"); 
	printf(" ����Ʈ�� ������ȸ : ");
	pre(root);
	printf("\n\n");
	
	printf(" ����Ʈ�� ������ȸ : "); 
	ino(root);
	printf("\n\n");
	
	printf(" ����Ʈ�� ������ȸ : ");
	pos(root);
	
	return 0;
}
