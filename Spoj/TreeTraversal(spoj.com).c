#include<stdio.h>
#include<stdlib.h>

struct BstNode{
	int data;
	struct BstNode *left;
	struct BstNode *right;
};

struct BstNode *getnewNode(int data){
	struct BstNode *newNode=(struct BstNode *)malloc(sizeof(struct BstNode));
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void postorder(struct BstNode *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);   
    }
}
void inorder( struct BstNode *root ) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct BstNode *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct BstNode *Insert(struct BstNode *root,int data){
   	if(root==NULL){
   		root=getnewNode(data);
	   }
	else if(data <= root->data){
		root->left=Insert(root->left,data);
	}
	else{
		root->right=Insert(root->right,data);
	}
	return root;	
}

int main(){
	struct BstNode *root;
	root=NULL;
	int n,g,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		root=Insert(root,arr[i]);
	}
	  printf("Pre order : ");
	preorder(root);
	printf("\b\nIn order  : ");
	inorder(root);
	printf("\b\nPost order: ");
	postorder(root);
	printf("\b\n");
}
