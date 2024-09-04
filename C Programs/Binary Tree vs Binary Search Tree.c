#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node * rootBST = NULL;

void displayTree(struct node * root,int level)
{
    if(root!=NULL)
    {
        displayTree(root->right,level+1);

        for(int i=1;i<level;i++)
            printf("\t");
        
        printf("%d\n",root->data);

        displayTree(root->left,level+1);
    }
}

struct node *createBSTNode(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = val;
    newNode->left = newNode->right = NULL;

    return newNode;
}

struct node *insertBSTNode(struct node *rootBST, int data)
{
    if (data != -1)
    {
        if (rootBST == NULL)
            return createBSTNode(data);

        else if (data > rootBST->data)
            rootBST->right = insertBSTNode(rootBST->right, data);

        else if (data < rootBST->data)
            rootBST->left = insertBSTNode(rootBST->left, data);

        return rootBST;
    }
    else
        return NULL;
}

struct node *searchNode(struct node *rootNode, int target, int *nodesTraversed)
{
    if (rootNode == NULL)
    {
        *nodesTraversed = 0;
        return NULL;
    }

    (*nodesTraversed)++;

    if (target == rootNode->data)
        return rootNode;

    struct node *leftResult = searchNode(rootNode->left, target, nodesTraversed);
    if (leftResult != NULL)
        return leftResult;

    struct node *rightResult = searchNode(rootNode->right, target, nodesTraversed);
    if (rightResult != NULL)
        return rightResult;

    return NULL;
}

struct node *searchBSTNode(struct node *rootBST, int target, int *nodesTraversed)
{
    if (rootBST == NULL)
    {
        *nodesTraversed = 0; // No nodes traversed, as the tree is empty.
        return NULL;
    }

    (*nodesTraversed)++;

    if (target == rootBST->data)
        return rootBST;
    else if (target > rootBST->data)
        return searchBSTNode(rootBST->right, target, nodesTraversed);
    else if (target < rootBST->data)
        return searchBSTNode(rootBST->left, target, nodesTraversed);
}


int main()
{
    int choice;
    while (1)
    {
        printf("\nCOMPARING BINARY TREE & BINARY SEARCH TREE\n");
        printf("1. CREATE TREE\n");
        printf("2. DISPLAY TREE\n");
        printf("3. COMPARE BINARY TREE AND BINARY SEARCH TREE\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int nData;
            while (1)
            {
                printf("Enter data for new node (-1 for no node) : ");
                scanf("%d", &nData);
                if (nData != -1)
                    rootBST = insertBSTNode(rootBST, nData);
                else
                    break;
                displayTree(rootBST, 1);
            }
            displayTree(rootBST, 1);
            break;
        case 2:
            printf("\nDISPLAYING TREE:\n");
            displayTree(rootBST, 1);
            break;
        case 3:
            int src = 0, nodesTraversed = 0, nodesBSTTraversed = 0;

            printf("\nEnter an element to search : ");
            scanf("%d", &src);

            if (searchNode(rootBST, src, &nodesTraversed) != NULL && searchBSTNode(rootBST, src, &nodesBSTTraversed) != NULL)
            {
                printf("%d EXSISTS\n", src);
                printf("\nNODES TRAVERSED IN BINARY TREE FORMAT : %d",nodesTraversed);
                printf("\nNODES TRAVERSED IN BINARY SEARCH TREE FORMAT : %d",nodesBSTTraversed);

                if(nodesTraversed < nodesBSTTraversed)
                    printf("\n\tBINARY TREE IS BETTER THAN BINARY SEARCH TREE\n");
                else if (nodesBSTTraversed < nodesTraversed)
                    printf("\n\tBINARY SEARCH TREE IS BETTER THAN BINARY TREE\n");
                else
                    printf("\n\tBOTH ARE EQUALLY GOOD.\n");
            }            
            else
                printf("\n%d DOES NOT EXSIST", src);    
           break;
        default:
            printf("\nERR:INVALID CHOICE \nEXITING .......");
            exit(0);       
            
        }
    }
}