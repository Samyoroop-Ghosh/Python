#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * right;
    struct node * left;    
};

struct node * rootNode = NULL;

struct node * createNode()
{
    int nData;
    printf("DATA (-1 FOR NO NODE): ");
    scanf("%d",&nData);

    if(nData==-1)
        return NULL;
    else
    {
        struct node * newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = nData;

        printf("\nLEFT CHILD OF %d\n",newNode->data);
        newNode->left = createNode();

        printf("\nRIGHT CHILD OF %d\n",newNode->data);
        newNode->right = createNode();

        return newNode;
    }    
}

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

void freeTree(struct node * root)
{
    if(root!=NULL)
    {
        freeTree(root->right);
        freeTree(root->left);
        free(root);
    }
}

int heightTree(struct node * root)
{
    if(root!=NULL)
    {
     return (1 + (heightTree(root->right)>heightTree(root->left) ? heightTree(root->right) : heightTree(root->left)));
    }
}

int countTotalNodes(struct node * root)
{
    if(root!=NULL)
    {
        return (1 + countTotalNodes(root->right) + countTotalNodes(root->left));
    }
}

int countInternalNodes(struct node * root)
{
    if(root != NULL && (root->left != NULL || root->right != NULL))
    {
        return (1 + countInternalNodes(root->right) + countInternalNodes(root->left));
    }
}

int countLeafNodes(struct node * root)
{
    if(root != NULL)
    {
        if(root->left == NULL && root->right == NULL)
            return 1;
        else
            return countLeafNodes(root->right) + countLeafNodes(root->left);
    }
    return 0;
}

int countSiblings(struct node * root, int key)
{
    int siblingsCount = 0;

    if (root == NULL)
        return 0;

    else if ((root->right != NULL && root->left != NULL) && (root->left->data == key || root->right->data == key))
        siblingsCount++;

    siblingsCount += countSiblings(root->left, key) + countSiblings(root->right, key);

    return siblingsCount;
}

int degreeNode(struct node * root, int key)
{
    if (root == NULL)
        return -1; // Node not found

    if (root->data == key)
    {
        // Check the number of children
        int childCount = 0;
        if (root->left != NULL)
            childCount++;
        if (root->right != NULL)
            childCount++;
        return childCount;
    }

    // Recursively search in left and right subtrees
    int leftDegree = degreeNode(root->left, key);
    if (leftDegree != -1)
        return leftDegree;

    int rightDegree = degreeNode(root->right, key);
    if (rightDegree != -1)
        return rightDegree;

    return -1; // Node not found
}

struct node *searchNode(struct node *root, int target, int *nodesTraversed)
{
    if (root == NULL)
    {
        *nodesTraversed = 0; // No nodes traversed, as the tree is empty.
        return NULL;
    }

    (*nodesTraversed)++;

    if (target == root->data)
        return root;
    else if (target > root->data)
        return searchNode(root->right, target, nodesTraversed);
    else if (target < root->data)
        return searchNode(root->left, target, nodesTraversed);
}

void main()
{
    int choice, key, src, nodesTraversed = 0;
    while (1)
    {
        printf("\nBINARY TREE USING LL\n");
        printf("1. CREATE BINARY TREE\n");
        printf("2. DISPLAY BINARY TREE\n");
        printf("3. CALCULATE HEIGHT OF TREE\n");
        printf("4. COUNT TOTAL NUMBER OF NODES\n");
        printf("5. COUNT NUMBER OF INTERNAL NODES\n");
        printf("6. COUNT NUMBER OF LEAF NODES\n");
        printf("7. COUNT SIBLINGS OF A NODE\n");
        printf("8. FIND DEGREE OF A NODE\n");
        printf("9. SEARCH FOR A NODE");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rootNode != NULL)
            {
                freeTree(rootNode);
                rootNode = NULL;
            }
            rootNode = createNode();
            break;
        case 2:
            printf("\nDISPLAYING TREE:\n");
            displayTree(rootNode, 1);
            break;
        case 3:
            printf("\nHEIGHT OF TREE: %d\n", heightTree(rootNode));
            break;
        case 4:
            printf("\nTOTAL NUMBER OF NODES: %d\n", countTotalNodes(rootNode));
            break;
        case 5:
            printf("\nNUMBER OF INTERNAL NODES: %d\n", countInternalNodes(rootNode));
            break;
        case 6:
            printf("\nNUMBER OF LEAF NODES: %d\n", countLeafNodes(rootNode));
            break;
        case 7:
            printf("\nENTER TARGET NODE: ");
            scanf("%d", &key);
            printf("NO OF SIBLINGS OF NODE %d : %d\n", key, countSiblings(rootNode, key));
            break;
        case 8:
            printf("\nENTER TARGET NODE: "); 
            scanf("%d", &key);
            if (degreeNode(rootNode, key) == -1)
                printf("ERROR: NODE NOT FOUND.\n");
            else
                printf("DEGREE OF NODE %d : %d\n", key, degreeNode(rootNode, key));
            break;
        case 9:
            int src = 0;
            printf("\nEnter an element to search in the BINARY TREE : ");
            scanf("%d", &src);
            
            int nodesTraversed = 0;
            if (searchNode(rootNode, src, &nodesTraversed) != NULL)
                printf("%d exists. Nodes traversed: %d\n", src, nodesTraversed);
            else
                printf("%d does not exist. Nodes traversed: %d\n", src, nodesTraversed);
            break;
        default:
            printf("\nERR:INVALID CHOICE \nEXITING .......");
            freeTree(rootNode);
            exit(0);       
            
        }
    }
}
