/*Create a binary tree and perform different traversal on it.
a. In-order
b. Pre-order
c. Post-order*/


#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
void Postorder(struct node* node)
{
	if (node == NULL)
		return;
	Postorder(node->left);
	Postorder(node->right);
	printf("%d ", node->data);
}
void Inorder(struct node* node)
{
	if (node == NULL)
		return;
	Inorder(node->left);
	printf("%d ", node->data);
	Inorder(node->right);
}
void Preorder(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	Preorder(node->left);
	Preorder(node->right);
}
int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(7);
	root->left->right->left = newNode(8);
	root->left->right->right = newNode(9);
	printf("a) Inorder traversal of binary tree is   : ");
	Inorder(root);
	printf("\nb) Preorder traversal of binary tree is  : ");
	Preorder(root);
	printf("\nc) Postorder traversal of binary tree is : ");
	Postorder(root);
	return 0;
}
