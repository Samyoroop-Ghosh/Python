#include <stdio.h>

#define MAX_SIZE 20

int arr[MAX_SIZE] = {-1};

void createArrayTree(int numNodes)
{
    int rootData;
    
    if (numNodes < 1)
    {
        printf("Number of nodes should be at least 1.\n");
        return;
    }
    
    printf("Enter root node: ");
    scanf("%d", &rootData);
    arr[0] = rootData;

    for (int i = 0; i < numNodes; i++)
    {
        if (arr[i] != -1)
        {
            if (2 * i + 1 < numNodes)
            {
                printf("Enter left child of %d (or -1 for no left child): ", arr[i]);
                insertLeftChild(i);
            }
            if (2 * i + 2 < numNodes)
            {
                printf("Enter right child of %d (or -1 for no right child): ", arr[i]);
                insertRightChild(i);
            }
        }
    }
}

void insertLeftChild(int i)
{
    int ldata;
    scanf("%d", &ldata);
    arr[2 * i + 1] = ldata;
}

void insertRightChild(int i)
{
    int rdata;
    scanf("%d", &rdata);
    arr[2 * i + 2] = rdata;
}

int main()
{
    int numNodes;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    createArrayTree(numNodes);

    printf("\nArray representation of the binary tree (only valid nodes up to %d):\n", numNodes);
    for (int i = 0; i < numNodes; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("- ");
        }
    }
    printf("\n");

    return 0;
}
