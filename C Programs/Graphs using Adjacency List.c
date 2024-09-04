#include <stdio.h>
#include <stdlib.h>

// Node structure for adjacency list
struct Node {
    int destNode;
    int edgeSize;
    struct Node* next;
};

// Graph structure
struct Graph {
    int no_of_nodes;
    struct Node** adjList;
};

// Create a new node
struct Node* createNode(int destNode, int edgeSize) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->destNode = destNode;
    newNode->edgeSize = edgeSize;
    newNode->next = NULL;
    return newNode;
}

// Create a graph with given number of nodes
struct Graph* createGraph(int no_of_nodes) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->no_of_nodes = no_of_nodes;
    graph->adjList = (struct Node**)malloc(no_of_nodes * sizeof(struct Node*));

    // Initialize each adjacency list as empty by making head as NULL
    for (int i = 0; i < no_of_nodes; ++i)
        graph->adjList[i] = NULL;

    return graph;
}

// Add an edge to the graph
void addEdge(struct Graph* graph, int sourceNode, int destNode, int edgeSize) {
    // Add an edge from sourceNode to destNode. A new node is added to the adjacency list of sourceNode.
    struct Node* newNode = createNode(destNode, edgeSize);
    newNode->next = graph->adjList[sourceNode - 1];
    graph->adjList[sourceNode - 1] = newNode;
}

// Display the graph
void displayGraph(struct Graph* graph) {
    printf("\nGRAPH IMPLEMENTED THROUGH ADJACENCY LIST\n");
    for (int i = 0; i < graph->no_of_nodes; ++i) {
        struct Node* temp = graph->adjList[i];
        printf("Adjacency list of vertex %d\n", i + 1);
        while (temp) {
            printf("%d (=%d)\t", temp->destNode, temp->edgeSize);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int no_of_nodes, no_of_edges;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &no_of_nodes);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &no_of_edges);

    struct Graph* graph = createGraph(no_of_nodes);

    printf("Enter the edges in the format (sourceNode destNode edgeSize):\n");
    for (int i = 0; i < no_of_edges; ++i) {
        int sourceNode, destNode, edgeSize;
        scanf("%d %d %d", &sourceNode, &destNode, &edgeSize);
        addEdge(graph, sourceNode, destNode, edgeSize);
    }

    displayGraph(graph);

    return 0;
}
