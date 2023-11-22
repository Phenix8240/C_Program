// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct term{
//     int c,e;
//     struct term *next;
// }*head1,*head2;

// void Create(struct term **head){
//     struct term *p,*t;
//     int n,coef,exp;
//     *head=NULL;
//     printf("\nEnter the Number of terms in Polynomial:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//       printf("Enter the coefficient for term %d: ", i);
//         scanf("%d", &coef);
//         printf("Enter the exponent for term %d: ", i); 
//         scanf("%d", &exp);

//         p = (struct term*)malloc(sizeof(struct term));
//         if (p == NULL) {
//             printf("\nMemory allocation failed!");
//             return;
//         }

//         p->c = coef;
//         p->e = exp;
//         p->next = NULL;

//         if (*head == NULL) {
//             *head = p;
//         } else {
//             t->next = p;
//         }
//         t = p;
//     }
    
// }

// struct term*AddPolynomial(struct term *p1,struct term*p2){
//     struct term *result=NULL;
//     struct term*p,*t;
//     while(p1!=NULL && p2!=NULL){
//         p=(struct term*)malloc(sizeof(struct term));
//         if(p==NULL){
//             printf("\nMemory Allocation Failed!");
//             return NULL;
//         }
//         if(p1->e > p2->e){
//             p->c=p1->c;
//             p->e=p1->e;
//             p1=p1->next;
//         }
//         else if(p1->e < p2->e){
//             p->c=p2->c;
//             p->e=p2->e;
//             p2=p2->next;
//         }
//         else{
//             p->c=p1->c + p2->c;
//             p->e=p1->e;
//             p1=p1->next;
//             p2=p2->next;
//         }
//         p->next=NULL;
//         if(result==NULL){
//             result=p;
//         }else{
//             t->next=p;
//         }
//         t=p;
//     }
// while(p1!=NULL){
//         p = (struct term*)malloc(sizeof(struct term));
//         if (p == NULL) {
//             printf("\nMemory allocation failed!");
//             return NULL;
//         }
//         p->c=p1->c;
//         p->e=p1->e;
//         p->next=NULL;
//         t->next=p;
//         t=p;
//         p1=p1->next;
//     }
//     while(p2!=NULL){
//         p = (struct term*)malloc(sizeof(struct term));
//         if (p == NULL) {
//             printf("\nMemory allocation failed!");
//             return NULL;
//         }
//         p->c=p2->c;
//         p->e=p2->e;
//         p->next=NULL;
//         t->next=p;
//         t=p;
//         p2=p2->next;
//     }
//     return result;
// }
// void Display(struct term *head){
//     struct term*t=head;
//     if(head==NULL){
//         printf("\nPolynomial is Empty!");
//         return;
//     }
//     else{
//         printf("\nPolynomial Representation:");
//         while(t!=NULL){
//             printf("|(%d^%d)-->|",t->c,t->e);
//             t=t->next;
//         }
//         printf("NULL");
//     }
// }
// int main(){
// Create(&head1);
// Display(head1);
// Create(&head2);
// Display(head2);
// struct term * result=AddPolynomial(head1,head2);
// printf("\nResultant Polynomial:");
// Display(result);
// getch();
// return 0;
// }


#include <gtk/gtk.h>
#include<conio.h>
// Structure to represent a graph
struct Graph {
    int vertices;
    int** adjacencyMatrix;
};

// Structure to represent a node in the DFS traversal
struct DFSNode {
    int vertex;
    struct DFSNode* next;
};

// Function to create a new graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->adjacencyMatrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        graph->adjacencyMatrix[i] = (int*)malloc(vertices * sizeof(int));
        memset(graph->adjacencyMatrix[i], 0, vertices * sizeof(int));
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjacencyMatrix[src][dest] = 1;
    graph->adjacencyMatrix[dest][src] = 1;
}

// Function to perform DFS traversal
void DFS(struct Graph* graph, int startVertex, gboolean* visited, GtkWidget* drawingArea) {
    visited[startVertex] = TRUE;

    for (int i = 0; i < graph->vertices; i++) {
        if (graph->adjacencyMatrix[startVertex][i] == 1 && !visited[i]) {
            // Draw the edge (startVertex, i) to represent the DFS traversal
            // This is where you would update the graphical representation
            // of the graph and highlight the traversal process.

            // For simplicity, let's print the traversal steps to the console.
            printf("DFS: Visiting vertex %d\n", i);

            DFS(graph, i, visited, drawingArea);
        }
    }
}

// Function to initiate DFS traversal from a given start vertex
void initiateDFS(struct Graph* graph, int startVertex, GtkWidget* drawingArea) {
    gboolean* visited = g_new(gboolean, graph->vertices);
    memset(visited, FALSE, graph->vertices * sizeof(gboolean));

    DFS(graph, startVertex, visited, drawingArea);

    g_free(visited);
}

// Function to draw the graph (for simplicity, this is a placeholder)
static gboolean on_draw_event(GtkWidget* widget, cairo_t* cr, gpointer user_data) {
    // This is where you would draw the vertices and edges of the graph.
    // For simplicity, we're leaving it empty for now.

    return FALSE;
}

int main(int argc, char* argv[]) {
    gtk_init(&argc, &argv);

    struct Graph* graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "DFS Graph Traversal");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 400);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget* drawingArea = gtk_drawing_area_new();
    gtk_container_add(GTK_CONTAINER(window), drawingArea);
    g_signal_connect(drawingArea, "draw", G_CALLBACK(on_draw_event), NULL);

    initiateDFS(graph, 2, drawingArea);

    gtk_widget_show_all(window);

    gtk_main();
    getch();
    return 0;
}
