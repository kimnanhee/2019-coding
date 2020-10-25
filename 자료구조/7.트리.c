#include <stdio.h>
#include <stdlib.h>

typedef struct _tree{
	char data;
	struct _tree *left;
	struct _tree *right;
}tree;

tree* makenode(char data, tree* lnode, tree* rnode)
{
	tree* root = (tree*)malloc(sizeof(tree));
	root -> data = data;
	root -> left = lnode;
	root -> right = rnode;
	return root;
}

void Preorder(tree* root) // 전위  
{
	if(root)
	{
		printf("%c ", root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
}

void Inorder(tree* root) // 중위 
{
	if(root)
	{
		Inorder(root->left);
		printf("%c ", root->data);
		Inorder(root->right);
	}
}

void Postorder(tree* root) // 후위  
{
	if(root)
	{
		Postorder(root->left);
		Postorder(root->right);
		printf("%c ", root->left);
	}
}

int main()
{
	tree* A = makenode('A', NULL, NULL);
	tree* L = makenode('L', NULL, NULL);
	tree* H = makenode('H', NULL, A);
	tree* K = makenode('K', NULL, L);
	tree* D = makenode('D', H, NULL);
	tree* P = makenode('P', NULL, NULL);
	tree* F = makenode('F', K, NULL);
	tree* C = makenode('C', P, D);
	tree* V = makenode('V', NULL, F);
	tree* B = makenode('B', V, C);
	tree* T = makenode('T', B, NULL);
	
	printf("Preorder : ");
	Preorder(T);
	puts("\n\n");
	
	printf("Inorder : ");
	Inorder(T);
	puts("\n\n");
	
	printf("Postorder : ");
	Preorder(T);
	puts("\n\n");
}
