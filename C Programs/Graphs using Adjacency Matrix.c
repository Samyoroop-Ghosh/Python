#include <stdio.h>
#include <stdbool.h>
#define MAXNODE 10

int graph[MAXNODE][MAXNODE], no_of_nodes = 0;

void add_Edge(int sourceNode, int destNode, int edgeSize) 
{
    graph[sourceNode - 1][destNode - 1] = edgeSize;
}

void display_Graph(int no_of_nodes) 
{
    printf("\nGRAPH IMPLEMENTED THROUGH ADJACENCY MATRIX\n");

    for (int i = 0; i < no_of_nodes; i++) 
    {
        for (int j = 0; j < no_of_nodes; j++) 
        {
            printf("%d\t", graph[i][j]);
        }
        printf("\n");
    }
}

int remove_Edge(int sourceNode, int destNode) 
{
    graph[sourceNode - 1][destNode - 1] = 0;
    return graph[sourceNode - 1][destNode - 1];
}

void count_Even_Odd_Vertices(int no_of_nodes)
{
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < no_of_nodes; i++) 
    {
        int degree = 0;
        for (int j = 0; j < no_of_nodes; j++) 
        {
            if(graph[i][j] != 0)
                degree++;       
        }
        if(degree%2 == 0)
            countEven++;
        else
            countOdd++;
    }
    printf("\nNO OF VERTICES WITH EVEN OUT DEGREE : %d", countEven);
    printf("\nNO OF VERTICES WITH ODD OUT DEGREE : %d", countOdd);
}

bool is_Complete_Graph(int no_of_nodes) 
{
    for (int i = 0; i < no_of_nodes; i++) 
    {
        for (int j = 0; j < no_of_nodes; j++) 
        {
            if (i != j && graph[i][j] == 0)
            {
                return false; // Not a complete graph
            }
        } 
    }
    return true; // Complete graph
}

bool detectCycleUtil(int v, bool visited[], int parent, int no_of_nodes) 
{
    visited[v] = true;

    for (int i = 0; i < no_of_nodes; i++) 
    {
        if (graph[v][i] != 0) 
        {
            if (!visited[i]) 
            {
                if (detectCycleUtil(i, visited, v, no_of_nodes))
                    return true;
            } 
            else if (i != parent) 
            {
                return true;
            }
        }
    }

    return false;
}

int detectCycle(int no_of_nodes) 
{
    int cycleCount = 0;
    bool visited[MAXNODE];
    for (int i = 0; i < no_of_nodes; i++) 
    {
        visited[i] = false;
    }

    for (int i = 0; i < no_of_nodes; i++) 
    {
        if (visited[i] == false) 
        {
            if (detectCycleUtil(i, visited, -1, no_of_nodes))
            {
                cycleCount++;
            }
        }
    }
    return cycleCount;
}

int main() 
{
    int choice;
    static int edgeCount;
    do 
    {
        printf("\nADJACENCY MATRIX MENU :\n");        
        printf("1. CREATE ADJACENCY MATRIX\n");        
        printf("2. ADD EDGES\n");
        printf("3. REMOVE AN EDGE\n");
        printf("4. DISPLAY GRAPH\n");
        printf("5. COUNT NUMBER OF EDGES & VERTICES\n");
        printf("6. COUNT OF ODD/EVEN DEGREE VERTICES\n");
        printf("7. CHECK WHETHER A GRAPH IS A COMPLETE GRAPH OR NOT\n");
        printf("8. DETECT FOR CYCLES IN THE GRAPH\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("\nENTER NO OF NODES : ");
                scanf("%d", &no_of_nodes);
                for (int i = 0; i < no_of_nodes; i++) 
                {
                    for (int j = 0; j < no_of_nodes; j++)
                        graph[i][j] = 0;
                }   
                printf("\nGRAPH WITH %d NODES CREATED\n", no_of_nodes);
                break;
            case 2:
                int sourceNode, destNode, edgeSize;
                do
                {
                    printf("\nENTER SOURCE & DESTINATION NODE (-1 TO STOP) : ");
                    scanf("%d %d", &sourceNode, &destNode);
                    if(sourceNode != -1 && destNode != -1)
                    {
                        if (sourceNode >= 1 && sourceNode <= no_of_nodes && destNode >= 1 && destNode <= no_of_nodes) 
                        {
                            printf("ENTER EDGE SIZE : ");
                            scanf("%d", &edgeSize);
                            add_Edge(sourceNode, destNode, edgeSize);
                            edgeCount++;
                            display_Graph(no_of_nodes);
                        } 
                        else
                            printf("\nINVALID NODE INDEX.\n"); 
                    }
                    else                     
                        break;                   
                } while (sourceNode != -1 && destNode != -1);        
                break;
            case 3:
                int edgeSrc = 0, edgeDst =0;
                printf("\nENTER SOURCE & DESTINATION NODE OF EDGE TO BE REMOVED : ");
                scanf("%d %d", &edgeSrc, &edgeDst);
                if (edgeSrc >= 1 && edgeSrc <= no_of_nodes && edgeDst >= 1 && edgeDst <= no_of_nodes) 
                {
                    if(remove_Edge(edgeSrc, edgeDst))
                        printf("\nEDGE NOT DELETED\n");
                    else
                    {
                        printf("\nEDGE DELETED\n");
                        edgeCount--;
                    }
                        
                    
                    display_Graph(no_of_nodes);
                } 
                else 
                    printf("\nINVALID EDGE COORDINATES.\n");
                break;
            case 4:
                display_Graph(no_of_nodes);
                break;
            case 5:
                printf("\nNO OF VERTICES : %d\n", no_of_nodes);
                printf("\nNO OF EDGES : %d\n", edgeCount);
                break;
            case 6:
                count_Even_Odd_Vertices(no_of_nodes);
                break;
            case 7:
                if (is_Complete_Graph(no_of_nodes))
                    printf("\nTHE GRAPH IS COMPLETE.\n");
                else
                    printf("\nTHE GRAPH IS NOT COMPLETE.\n");
                break;
            case 8:
                int cycle = detectCycle(no_of_nodes);
                if (cycle)
                    printf("\n%d CYCLES DETECTED IN THE GRAPH.\n",cycle);
                else
                    printf("\nNO CYCLE DETECTED IN THE GRAPH.\n");
                break;
            default:
                printf("\nINVALID CHOICE\nEXITING NOW . . .\n");
                choice = -1;
        }
    } while (choice != -1);
}

