#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *createNode(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->left = newNode->right = NULL;

    return newNode;
}

struct Node *insertNode(struct Node * root, int data)
{
    if (data != -1)
    {
        if (root == NULL)
            return createNode(data);

        else if (data > root->data)
            root->right = insertNode(root->right, data);

        else if (data < root->data)
            root->left = insertNode(root->left, data);

        return root;
    }
    else
        return NULL;
}

void displayTree(struct Node * root, int level)
{
    if (root != NULL)
    {
        displayTree(root->right, level + 1);

        for (int i = 1; i < level; i++)
            printf("\t");

        printf("(LEVEL %d) %d\n", level, root->data);

        displayTree(root->left, level + 1);
    }
}

int countNodes(struct Node * root)
{
    if (root != NULL)
        return (1 + countNodes(root->left) + countNodes(root->right));
}

int maxNode(struct Node * root)
{
    if (root != NULL)
    {
        while (root->right != NULL)
            root = root->right;
    }

    return root->data;
}

struct Node* findMin(struct Node * root)
{
    if (root == NULL) {
        return NULL;
    }
    else if (root->left != NULL) {
        return findMin(root->left);
    }
    return root;
}

int degreeNode(struct Node * root, int key)
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

struct Node *searchNode(struct Node * root, int target, int *nodesTraversed)
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

struct Node * delete (struct Node * root, int x)
{
    if (root == NULL)
        return NULL;
 
    if (x > root->data)
        root->right = delete (root->right, x);
    else if (x < root->data)
        root->left = delete (root->left, x);
    else 
    {
        if (root->left == NULL && root->right == NULL)
            return NULL;
        else if (root->left == NULL || root->right == NULL) 
        {
            struct Node * temp;
            if (root->left == NULL)
                temp = root->right;
            else
                temp = root->left;
            return temp;
        }
        else 
        {
            struct Node * temp = findMin(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
    return root;
}

void postOrder(struct Node * root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

void inOrder(struct Node * root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct Node * root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    int choice, data;

    do
    {
        printf("\n\nBST USING LL :\n");
        printf("1. Create Tree\n");
        printf("2. Display Tree\n");
        printf("3. Count Total Nodes\n");
        printf("4. Find Node with Highest Value\n");
        printf("5. Search for a Node\n");
        printf("6. Delete a node\n");
        printf("7. Post-order Traversal\n");
        printf("8. Pre-order Traversal\n");
        printf("9. In-order Traversal\n");
        printf("10. Sort the elements\n");
        printf("\nEnter your choice: ");
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
                    root = insertNode(root, nData);
                else
                    break;
                displayTree(root, 1);
            }
            break;
        case 2:
            printf("\nTREE :\n");
            displayTree(root, 1);
            break;
        case 3:
            printf("\nTotal Number of Nodes : %d", countNodes(root));
            break;
        case 4:
            printf("\nNode with Highest Value : %d", maxNode(root));
            break;
        case 5:
            int src = 0;
            printf("\nEnter an element to search : ");
            scanf("%d", &src);
            {
                int nodesTraversed = 0;
                if (searchNode(root, src, &nodesTraversed) != NULL)
                    printf("%d exists. Nodes traversed: %d\n", src, nodesTraversed);
                else
                    printf("%d does not exist. Nodes traversed: %d\n", src, nodesTraversed);
            }
            break;
        case 6:
            int target = 0;
            printf("\nENTER AN ELEMENT TO DELETE : ");
            scanf("%d", &target);

            if (degreeNode(root, target) == -1)
                printf("ERROR: NODE NOT FOUND\n");
            else
                printf("%d HAS %d CHILDREN.\n", target, degreeNode(root, target));

            struct Node * temp = delete(root, target);

            printf("TREE AFTER DELETION :\n");
            displayTree(root, 1);
            break;
        case 7:
            printf("\nPost-order traversal : ");
            postOrder(root);
            printf("\n");
            break;
        case 8:
            printf("\nPre-order traversal : ");
            preOrder(root);
            printf("\n");
            break;
        case 9:
            printf("\nIn-order traversal : ");
            inOrder(root);
            printf("\n");
            break;
        case 10:
            printf("\nElements in sorted order : ");
            inOrder(root);
            break;
        default:
            printf("\nInvalid choice.\n Exiting...\n");
            return 0;
        }
    } while (choice != 0);
}
