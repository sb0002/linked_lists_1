#include <stdio.h>
#include <stdlib.h>

struct tnode{
	int data;
	struct tnode *left;
	struct tnode *right;
};

struct tnode* add(struct tnode *root, int n)
{
	struct tnode *nholder=malloc(sizeof(struct tnode));
	if(n < root->data)
	{
		root->left=nholder;
		nholder->data=n;
		nholder->right=NULL;
		nholder->left=NULL;
	}
	if(n > root->data)
	{
		root->right=nholder;
                nholder->data=n;
                nholder->right=NULL;
                nholder->left=NULL;

	}
	return(root);
}
