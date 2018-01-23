#include<stdio.h>
#include<stdlib.h>

struct BST{
	int data;
	struct BST *left;
	struct BST *right;
};

struct BST *root;

int MAX(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int BSTheight(struct BST *root){
	if(root==NULL){
		return -1;
	}
	return MAX(BSTheight(root->left),BSTheight(root->right))+1;
}
struct BST *insert(struct BST *root,int data){
	if(root==NULL){
		root=(struct BST*)malloc(sizeof(struct BST));
		root->data=data;
		root->left=root->right=NULL;
	}
	else if(data <= root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;
}

int diameter(struct BST *tree)
{
   /* base case where tree is empty */
   if (tree == NULL)
     return 0;
 
  /* get the height of left and right sub-trees */
  int lheight = BSTheight(tree->left);
  int rheight = BSTheight(tree->right);
 
  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(tree->left);
  int rdiameter = diameter(tree->right);
 
  /* Return max of following three
   1) Diameter of left subtree
   2) Diameter of right subtree
   3) Height of left subtree + height of right subtree + 1 */
  return MAX(lheight + rheight + 2, MAX(ldiameter, rdiameter));
} 

int main(){
	root=NULL;
	int n,i=0,j;
	scanf("%d",&n);
	root=insert(root,1);
	while(i<n-1){
	scanf("%d",&j);
	scanf("%d",&j);
	root=insert(root,j);
	i++;	
	}
	printf("%d\n",diameter(root));
	
}
