#include <stdio.h>
#include <stdlib.h> 

typedef struct node_struct{
	int data;
	struct node_struct *left;
	struct node_struct *right;
}node;
// 자기 참조 구조체 

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

void pre(node* root) // 트리 출력하기 : 전위순회  
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
	printf("트리에 삽입할 숫자를 입력해주세요.\n");
	printf("-1을 입력하면 프로그램이 종료됩니다.\n\n");
	
	node *root = NULL;
	while(1)
	{
		int num;
		scanf("%d", &num);
		
		if(num==-1) break;
		root = insert_node(root, num);
	}
	
	printf("\n"); 
	printf(" 이진트리 전위순회 : ");
	pre(root);
	printf("\n\n");
	
	printf(" 이진트리 중위순회 : "); 
	ino(root);
	printf("\n\n");
	
	printf(" 이진트리 후위순회 : ");
	pos(root);
	
	return 0;
}
