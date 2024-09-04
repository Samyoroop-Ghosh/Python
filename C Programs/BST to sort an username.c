#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data;
    struct Node *left, *right;
};

struct Node * createNode (char val)
{
    struct Node * newNode = (struct Node *) malloc (sizeof(struct Node));

    newNode->data = val;
    newNode->left = newNode->right = NULL;

    return newNode;
}

struct Node * insertNode (struct Node * root, char data)
{
    if(data!='\0')
    {
        if(root == NULL)
        return createNode(data);

        else if(data > root->data)
        root->right = insertNode(root->right,data);

        else if(data < root->data)
        root->left = insertNode(root->left,data);

        return root;
    }

    else
    return NULL;
}

void inOrder(struct Node* root)
{
	if (root != NULL) {
		inOrder(root->left);
		printf("%c ", root->data);
		inOrder(root->right);
	}
}

int main()
{
    struct Node* root = NULL;

    char str[20];
	printf("Enter the username : ");
	scanf("%s",str);

    int size = strlen(str);    
    
    root = insertNode(root,str[0]);
    
    for(int i=1;i<size;i++)
    {
        insertNode(root,str[i]); 
    }

    printf("Username in sorted order : ");
    inOrder(root);
}