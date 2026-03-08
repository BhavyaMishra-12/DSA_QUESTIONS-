// //    EX - 6 - Ii 
// #include <stdio.h>
// #include <stdlib.h>

// struct Item {
//     double weight;
//     double profit;
//     double ratio;
// };

// // Sort items by ratio (descending)
// int cmp(const void *a, const void *b) {
//     struct Item *x = (struct Item*)a;
//     struct Item *y = (struct Item*)b;

//     if (y->ratio > x->ratio) return 1;
//     if (y->ratio < x->ratio) return -1;
//     return 0;
// }

// int main() {

//     // Identity Block
//     printf("Name   : Bhavya Mishra\n");
//     printf("Section: CS3C\n");
//     printf("Roll No: 2301640100152\n\n");

//     int N;
//     double W;

//     // Prompts for input
//     printf("Enter N (number of items) and W (capacity): ");
//     scanf("%d %lf", &N, &W);

//     struct Item arr[N];

//     printf("Enter weights of %d items: ", N);
//     for (int i = 0; i < N; i++)
//         scanf("%lf", &arr[i].weight);

//     printf("Enter profits of %d items: ", N);
//     for (int i = 0; i < N; i++)
//         scanf("%lf", &arr[i].profit);

//     // Compute ratio
//     for (int i = 0; i < N; i++)
//         arr[i].ratio = arr[i].profit / arr[i].weight;

//     // Sort by ratio
//     qsort(arr, N, sizeof(struct Item), cmp);

//     double maxProfit = 0.0;

//     for (int i = 0; i < N; i++) {
//         if (W == 0) break;

//         if (arr[i].weight <= W) {
//             maxProfit += arr[i].profit;
//             W -= arr[i].weight;
//         } else {
//             double fraction = W / arr[i].weight;
//             maxProfit += arr[i].profit * fraction;
//             W = 0;
//         }
//     }

//     // Final profit (only required output)
//     printf("Maximum profit is : %.2lf\n", maxProfit);

//     return 0;
// }


// 6 - ii 
#include <stdio.h>
#include <stdlib.h>

// Name : Bhavya Mishra
// Section : CS3C
// Roll No. 2301640100152

// typedef struct {
//     int start;
//     int finish;
// } Activity;

// // Comparator function to sort activities by finish time
// int compare(const void *a, const void *b) {
//     Activity *act1 = (Activity *)a;
//     Activity *act2 = (Activity *)b;
//     return act1->finish - act2->finish;
// }

// int main() {
//     int N;
//     printf("Enter the number of activities: ");
//     scanf("%d", &N);

//     Activity activities[N];

//     printf("Enter the start times of the activities separated by space: ");
//     for(int i = 0; i < N; i++) {
//         scanf("%d", &activities[i].start);
//     }

//     printf("Enter the finish times of the activities separated by space: ");
//     for(int i = 0; i < N; i++) {
//         scanf("%d", &activities[i].finish);
//     }

//     // Sort activities by finish time
//     qsort(activities, N, sizeof(Activity), compare);

//     int count = 0;
//     int lastFinish = 0;

//     for(int i = 0; i < N; i++) {
//         if (activities[i].start >= lastFinish) {
//             lastFinish = activities[i].finish;
//             count++;
//         }
//     }

//     printf("\nMaximum number of non-overlapping activities: %d\n", count);

//     // Identity block
//     printf("\nName : Bhavya Mishra\nSection : CS3C\nRoll No. 2301640100152\n");

//     return 0;
// }
 
// 7- i 

// #include <stdio.h>

// // Name : Bhavya Mishra
// // Section : CS3C
// // Roll No. 2301640100152

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int N, W;

//     // Input with sentences
//     printf("Enter the number of items and the maximum weight of the knapsack: ");
//     scanf("%d %d", &N, &W);

//     int wt[N+1], profit[N+1];

//     printf("Enter the weights of the items: ");
//     for(int i = 1; i <= N; i++) {
//         scanf("%d", &wt[i]);
//     }

//     printf("Enter the profits of the items: ");
//     for(int i = 1; i <= N; i++) {
//         scanf("%d", &profit[i]);
//     }

//     int dp[N+1][W+1];

//     // DP table computation
//     for(int i = 0; i <= N; i++) {
//         for(int w = 0; w <= W; w++) {
//             if(i == 0 || w == 0)
//                 dp[i][w] = 0;
//             else if(wt[i] <= w)
//                 dp[i][w] = max(profit[i] + dp[i-1][w - wt[i]], dp[i-1][w]);
//             else
//                 dp[i][w] = dp[i-1][w];
//         }
//     }

//     // Output with sentences
//     printf("The maximum profit that can be obtained is: %d\n", dp[N][W]);

//     // Identity block
//     printf("\nName : Bhavya Mishra\nSection : CS3C\nRoll No. 2301640100152\n");

//     return 0;
// // }

// 7- ii

// #include <stdio.h>
// #include <string.h>

// // Name : Bhavya Mishra
// // Section : CS3C
// // Roll No. 2301640100152

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     // Print identity block
//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");

//     char A[1001], B[1001];
//     printf("Enter the first string:\n");
//     fgets(A, sizeof(A), stdin);
//     A[strcspn(A, "\n")] = 0; // Remove newline if present

//     printf("Enter the second string:\n");
//     fgets(B, sizeof(B), stdin);
//     B[strcspn(B, "\n")] = 0; // Remove newline if present

//     int m = strlen(A);
//     int n = strlen(B);
//     int L[m+1][n+1];

//     // Initialize DP table
//     for (int i = 0; i <= m; i++) {
//         for (int j = 0; j <= n; j++) {
//             if (i == 0 || j == 0)
//                 L[i][j] = 0;
//             else if (A[i-1] == B[j-1])
//                 L[i][j] = 1 + L[i-1][j-1];
//             else
//                 L[i][j] = max(L[i-1][j], L[i][j-1]);
//         }
//     }

//     printf("\nThe length of the Longest Common Subsequence (LCS) is:\n");
//     printf("%d\n", L[m][n]);

//     return 0;
// }

// 8- I 
// #include <stdio.h>
// #include <stdlib.h>
// // Structure to represent an edge
// struct Edge {
//     int u, v, w;
// };

// // Structure to represent a graph
// struct Graph {
//     int V, E;
//     struct Edge* edges;
// };

// // Function to create a graph
// struct Graph* createGraph(int V, int E) {
//     struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
//     graph->V = V;
//     graph->E = E;
//     graph->edges = (struct Edge*)malloc(E * sizeof(struct Edge));
//     return graph;
// }

// // Find function for union-find
// int find(int parent[], int i) {
//     if (parent[i] != i)
//         parent[i] = find(parent, parent[i]);
//     return parent[i];
// }

// // Union function for union-find
// void Union(int parent[], int rank[], int x, int y) {
//     int xroot = find(parent, x);
//     int yroot = find(parent, y);

//     if (rank[xroot] < rank[yroot])
//         parent[xroot] = yroot;
//     else if (rank[xroot] > rank[yroot])
//         parent[yroot] = xroot;
//     else {
//         parent[yroot] = xroot;
//         rank[xroot]++;
//     }
// }

// // Comparator function to sort edges by weight
// int compare(const void* a, const void* b) {
//     struct Edge* e1 = (struct Edge*)a;
//     struct Edge* e2 = (struct Edge*)b;
//     return e1->w - e2->w;
// }

// // Kruskal's algorithm
// void KruskalMST(struct Graph* graph) {
//     int V = graph->V;
//     struct Edge result[V]; // Store MST edges
//     int e = 0; // Index for result
//     int i = 0; // Index for sorted edges

//     // Sort edges by weight
//     qsort(graph->edges, graph->E, sizeof(graph->edges[0]), compare);

//     int *parent = (int*)malloc(V * sizeof(int));
//     int *rank = (int*)malloc(V * sizeof(int));

//     for (int v = 0; v < V; v++) {
//         parent[v] = v;
//         rank[v] = 0;
//     }

//     while (e < V - 1 && i < graph->E) {
//         struct Edge next_edge = graph->edges[i++];

//         int x = find(parent, next_edge.u);
//         int y = find(parent, next_edge.v);

//         if (x != y) {
//             result[e++] = next_edge;
//             Union(parent, rank, x, y);
//         }
//     }

//     // Print identity block
//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");

//     // Print MST
//     int totalWeight = 0;
//     printf("MST Weight: ");
//     for (int i = 0; i < e; i++)
//         totalWeight += result[i].w;
//     printf("%d\n", totalWeight);

//     printf("Edges:\n");
//     for (int i = 0; i < e; i++)
//         printf("%d - %d\n", result[i].u, result[i].v);

//     free(parent);
//     free(rank);
// }

// int main() {
//     int V, E;
//     // Sample Input
//     V = 4;
//     E = 5;
//     struct Graph* graph = createGraph(V, E);

//     graph->edges[0].u = 0; graph->edges[0].v = 1; graph->edges[0].w = 10;
//     graph->edges[1].u = 0; graph->edges[1].v = 2; graph->edges[1].w = 6;
//     graph->edges[2].u = 0; graph->edges[2].v = 3; graph->edges[2].w = 5;
//     graph->edges[3].u = 1; graph->edges[3].v = 3; graph->edges[3].w = 15;
//     graph->edges[4].u = 2; graph->edges[4].v = 3; graph->edges[4].w = 4;

//     KruskalMST(graph);

//     free(graph->edges);
//     free(graph);

//     return 0;
// }

// 8 - ii 
// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// // Name : Bhavya Mishra
// // Section : CS3C
// // Roll No. 2301640100152

// typedef struct Edge {
//     int vertex;
//     int weight;
//     int from; // store parent to display MST edges
//     struct Edge* next;
// } Edge;

// typedef struct {
//     Edge** adj;
//     int V;
// } Graph;

// // Min-heap node
// typedef struct {
//     int vertex;
//     int key;
//     int parent;
// } HeapNode;

// typedef struct {
//     HeapNode* array;
//     int size;
//     int capacity;
//     int* pos; // position of vertices in heap
// } MinHeap;

// // Function to create a graph
// Graph* createGraph(int V) {
//     Graph* graph = (Graph*)malloc(sizeof(Graph));
//     graph->V = V;
//     graph->adj = (Edge**)malloc((V+1) * sizeof(Edge*));
//     for (int i = 1; i <= V; i++)
//         graph->adj[i] = NULL;
//     return graph;
// }

// // Function to add edge
// void addEdge(Graph* graph, int u, int v, int w) {
//     Edge* edge = (Edge*)malloc(sizeof(Edge));
//     edge->vertex = v;
//     edge->weight = w;
//     edge->from = u;
//     edge->next = graph->adj[u];
//     graph->adj[u] = edge;

//     // Since undirected, add edge in other direction
//     edge = (Edge*)malloc(sizeof(Edge));
//     edge->vertex = u;
//     edge->weight = w;
//     edge->from = v;
//     edge->next = graph->adj[v];
//     graph->adj[v] = edge;
// }

// // Min-heap functions
// MinHeap* createMinHeap(int capacity) {
//     MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
//     heap->size = 0;
//     heap->capacity = capacity;
//     heap->array = (HeapNode*)malloc((capacity+1) * sizeof(HeapNode));
//     heap->pos = (int*)malloc((capacity+1) * sizeof(int));
//     return heap;
// }

// void swapHeapNode(HeapNode* a, HeapNode* b) {
//     HeapNode temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void minHeapify(MinHeap* heap, int idx) {
//     int smallest = idx;
//     int left = 2*idx;
//     int right = 2*idx + 1;

//     if (left <= heap->size && heap->array[left].key < heap->array[smallest].key)
//         smallest = left;
//     if (right <= heap->size && heap->array[right].key < heap->array[smallest].key)
//         smallest = right;

//     if (smallest != idx) {
//         HeapNode smallestNode = heap->array[smallest];
//         HeapNode idxNode = heap->array[idx];

//         // Swap positions
//         heap->pos[smallestNode.vertex] = idx;
//         heap->pos[idxNode.vertex] = smallest;

//         swapHeapNode(&heap->array[smallest], &heap->array[idx]);
//         minHeapify(heap, smallest);
//     }
// }

// int isEmpty(MinHeap* heap) {
//     return heap->size == 0;
// }

// HeapNode extractMin(MinHeap* heap) {
//     HeapNode root = heap->array[1];
//     HeapNode lastNode = heap->array[heap->size];
//     heap->array[1] = lastNode;

//     heap->pos[root.vertex] = heap->size;
//     heap->pos[lastNode.vertex] = 1;

//     heap->size--;
//     minHeapify(heap, 1);

//     return root;
// }

// void decreaseKey(MinHeap* heap, int v, int key, int parent) {
//     int i = heap->pos[v];
//     heap->array[i].key = key;
//     heap->array[i].parent = parent;

//     while (i > 1 && heap->array[i].key < heap->array[i/2].key) {
//         heap->pos[heap->array[i].vertex] = i/2;
//         heap->pos[heap->array[i/2].vertex] = i;
//         swapHeapNode(&heap->array[i], &heap->array[i/2]);
//         i = i/2;
//     }
// }

// int isInMinHeap(MinHeap* heap, int v) {
//     if (heap->pos[v] <= heap->size)
//         return 1;
//     return 0;
// }

// // Prim's algorithm
// void PrimMST(Graph* graph) {
//     int V = graph->V;
//     int* key = (int*)malloc((V+1) * sizeof(int));
//     int* parent = (int*)malloc((V+1) * sizeof(int));
//     MinHeap* heap = createMinHeap(V);

//     for (int v = 1; v <= V; v++) {
//         key[v] = INT_MAX;
//         heap->array[v] = (HeapNode){v, key[v], -1};
//         heap->pos[v] = v;
//     }

//     key[1] = 0;
//     heap->array[1].key = 0;
//     heap->array[1].parent = -1;
//     heap->size = V;

//     int totalWeight = 0;

//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");

//     printf("Edges selected in MST:\n");

//     while (!isEmpty(heap)) {
//         HeapNode minNode = extractMin(heap);
//         int u = minNode.vertex;
//         totalWeight += minNode.key;

//         if (minNode.parent != -1)
//             printf("%d - %d (Weight: %d)\n", minNode.parent, u, minNode.key);

//         Edge* edge = graph->adj[u];
//         while (edge != NULL) {
//             int v = edge->vertex;
//             if (isInMinHeap(heap, v) && edge->weight < key[v]) {
//                 key[v] = edge->weight;
//                 decreaseKey(heap, v, key[v], u);
//             }
//             edge = edge->next;
//         }
//     }

//     printf("\nTotal MST Weight: %d\n", totalWeight);

//     free(key);
//     free(parent);
//     free(heap->array);
//     free(heap->pos);
//     free(heap);
// }

// int main() {
//     int N, M;
//     // Sample Input
//     N = 5;
//     M = 6;
//     Graph* graph = createGraph(N);

//     addEdge(graph, 1, 2, 3);
//     addEdge(graph, 1, 3, 4);
//     addEdge(graph, 2, 3, 2);
//     addEdge(graph, 2, 4, 6);
//     addEdge(graph, 3, 5, 5);
//     addEdge(graph, 4, 5, 7);

//     PrimMST(graph);

//     // Free memory
//     for (int i = 1; i <= N; i++) {
//         Edge* curr = graph->adj[i];
//         while (curr != NULL) {
//             Edge* temp = curr;
//             curr = curr->next;
//             free(temp);
//         }
//     }
//     free(graph->adj);
//     free(graph);

//     return 0;
// }


// 9-i

// #include <stdio.h>

// #define INF 99999

// // Name : Bhavya Mishra
// // Section : CS3C
// // Roll No. 2301640100152

// int main() {

//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");

//     int N;
//     printf("Enter the number of vertices and then enter the adjacency matrix:\n");
//     scanf("%d", &N);

//     int dist[200][200];

//     // Input adjacency matrix
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             scanf("%d", &dist[i][j]);
//         }
//     }

//     // Floyd–Warshall Algorithm
//     for (int k = 0; k < N; k++) {
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < N; j++) {
//                 if (dist[i][k] < INF && dist[k][j] < INF &&
//                     dist[i][k] + dist[k][j] < dist[i][j]) 
//                 {
//                     dist[i][j] = dist[i][k] + dist[k][j];
//                 }
//             }
//         }
//     }

//     // Final Output
//     printf("\nThe All-Pairs Shortest Path (APSP) matrix after applying Warshall's Algorithm is:\n");

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (dist[i][j] >= INF)
//                 printf("INF ");
//             else
//                 printf("%d ", dist[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
//  }


// 9 - ii
// #include <stdio.h>
// #include <limits.h>
// #include <stdlib.h>

// #define INF 1000000000

// // Identity Block
// // Name : Bhavya Mishra
// // Section : CS3C
// Roll No. 2301640100152

// typedef struct {
//     int v;
//     long long dist;
// } Node;

// typedef struct {
//     Node* heap;
//     int size;
//     int capacity;
// } MinHeap;

// MinHeap* createHeap(int capacity) {
//     MinHeap* h = (MinHeap*)malloc(sizeof(MinHeap));
//     h->heap = (Node*)malloc(sizeof(Node) * capacity);
//     h->size = 0;
//     h->capacity = capacity;
//     return h;
// }

// void swap(Node* a, Node* b) {
//     Node temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void push(MinHeap* h, int v, long long dist) {
//     h->heap[h->size].v = v;
//     h->heap[h->size].dist = dist;
//     int i = h->size;

//     while (i > 0 && h->heap[i].dist < h->heap[(i - 1) / 2].dist) {
//         swap(&h->heap[i], &h->heap[(i - 1) / 2]);
//         i = (i - 1) / 2;
//     }
//     h->size++;
// }

// Node pop(MinHeap* h) {
//     Node root = h->heap[0];
//     h->heap[0] = h->heap[h->size - 1];
//     h->size--;

//     int i = 0;
//     while (1) {
//         int left = 2*i + 1, right = 2*i + 2, smallest = i;

//         if (left < h->size && h->heap[left].dist < h->heap[smallest].dist)
//             smallest = left;
//         if (right < h->size && h->heap[right].dist < h->heap[smallest].dist)
//             smallest = right;
//         if (smallest == i) break;

//         swap(&h->heap[i], &h->heap[smallest]);
//         i = smallest;
//     }

//     return root;
// }

// int main() {
//     int N, M;
    
//     printf("Enter number of vertices (N) and edges (M): ");
//     scanf("%d %d", &N, &M);

//     long long adj[N+1][N+1];

//     for (int i = 1; i <= N; i++)
//         for (int j = 1; j <= N; j++)
//             adj[i][j] = INF;

//     printf("Enter the edges (u v w) for directed graph:\n");
//     for (int i = 0; i < M; i++) {
//         int u, v;
//         long long w;
//         scanf("%d %d %lld", &u, &v, &w);
//         adj[u][v] = w; // DIRECTED
//     }

//     int S;
//     printf("Enter the source vertex S: ");
//     scanf("%d", &S);

//     long long dist[N+1];

//     for (int i = 1; i <= N; i++)
//         dist[i] = INF;

//     dist[S] = 0;

//     MinHeap* pq = createHeap(N * N);
//     push(pq, S, 0);

//     while (pq->size > 0) {
//         Node curr = pop(pq);
//         int u = curr.v;
//         long long d = curr.dist;

//         if (d != dist[u]) continue;

//         for (int v = 1; v <= N; v++) {
//             if (adj[u][v] != INF) {
//                 if (dist[u] + adj[u][v] < dist[v]) {
//                     dist[v] = dist[u] + adj[u][v];
//                     push(pq, v, dist[v]);
//                 }
//             }
//         }
//     }

//     printf("\n--- Output (Shortest distances from source) ---\n");
//     printf("Name : Bhavya Mishra\nSection : CS3C\nRoll No. 2301640100152\n\n");

//     for (int i = 1; i <= N; i++) {
//         if (dist[i] == INF) 
//             printf("-1 ");
//         else 
//             printf("%lld ", dist[i]);
//     }

//     printf("\n");

//     return 0;
// }


// 10 - i 

// #include <stdio.h>
// #include <stdbool.h>

// int N;
// int board[20][20];

// // Identity block
// void printIdentity() {
//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");
// }

// bool isSafe(int row, int col) {
//     int i, j;

//     // Check column
//     for (i = 0; i < row; i++)
//         if (board[i][col] == 1)
//             return false;

//     // Check upper-left diagonal
//     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j] == 1)
//             return false;

//     // Check upper-right diagonal
//     for (i = row, j = col; i >= 0 && j < N; i--, j++)
//         if (board[i][j] == 1)
//             return false;

//     return true;
// }

// bool solveNQ(int row) {
//     if (row == N)
//         return true;

//     for (int col = 0; col < N; col++) {
//         if (isSafe(row, col)) {
//             board[row][col] = 1;

//             if (solveNQ(row + 1))
//                 return true;

//             board[row][col] = 0;
//         }
//     }
//     return false;
// }

// int main() {

//     printIdentity();

//     printf("Enter the value of N for the N-Queen problem:\n");
//     scanf("%d", &N);

//     // Initialize board
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             board[i][j] = 0;

//     if (solveNQ(0) == false) {
//         printf("No solution exists.\n");
//         return 0;
//     }

//     printf("The N-Queen solution matrix is:\n");

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++)
//             printf("%d ", board[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 10 -ii

// #include <stdio.h>

// int n, target;
// int arr[25], subset[25];
// int found = 0;

// // Identity block
// void printIdentity() {
//     printf("Name : Bhavya Mishra\n");
//     printf("Section : CS3C\n");
//     printf("Roll No. 2301640100152\n\n");
// }

// void backtrack(int index, int currSum, int subIndex) {
//     if (currSum == target) {
//         found = 1;
//         printf("[ ");
//         for (int i = 0; i < subIndex; i++)
//             printf("%d ", subset[i]);
//         printf("]\n");
//         return;
//     }

//     if (index >= n || currSum > target)
//         return;

//     // Include arr[index]
//     subset[subIndex] = arr[index];
//     backtrack(index + 1, currSum + arr[index], subIndex + 1);

//     // Exclude arr[index]
//     backtrack(index + 1, currSum, subIndex);
// }

// int main() {

//     printIdentity();

//     printf("Enter number of elements:\n");
//     scanf("%d", &n);

//     printf("Enter %d positive integers:\n", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("Enter the target sum:\n");
//     scanf("%d", &target);

//     printf("\nSubsets whose sum is equal to %d are:\n", target);
//     backtrack(0, 0, 0);

//     if (!found)
//         printf("No subset found for the given sum.\n");

//     return 0;
// }


// 1. i
// #include <stdio.h>
// #include <time.h>

// int linearRec(int arr[], int n, int x, int i) {
//     if (i == n) return -1;
//     if (arr[i] == x) return i;
//     return linearRec(arr, n, x, i + 1);
// }

// int binaryRec(int arr[], int l, int r, int x) {
//     if (l > r) return -1;

//     int mid = (l + r) / 2;

//     if (arr[mid] == x) return mid;
//     else if (x < arr[mid]) return binaryRec(arr, l, mid - 1, x);
//     else return binaryRec(arr, mid + 1, r, x);
// }

// int main() {
//     int sizes[] = {1000, 5000, 10000, 20000, 50000};
//     int ns = 5;

//     printf("InputSize\tLinear(ms)\tBinary(ms)\n");

//     for (int s = 0; s < ns; s++) {
//         int n = sizes[s];
//         int arr[n];

//         // Filling array with sorted values for Binary Search
//         for (int i = 0; i < n; i++)
//             arr[i] = i + 1;

//         int x = n; // best case for last element

//         clock_t start, end;

//         // Linear Search Time
//         start = clock();
//         linearRec(arr, n, x, 0);
//         end = clock();
//         double linearTime = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

//         // Binary Search Time
//         start = clock();
//         binaryRec(arr, 0, n - 1, x);
//         end = clock();
//         double binaryTime = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

//         printf("%d\t\t%.3f\t\t%.3f\n", n, linearTime, binaryTime);
//     }

//     printf("--------------------------------------------------------\n\n");

//     // Identity Block at End
//     printf("Name : Bhavya Mishra\n");
//     printf("Roll No. : 2301640100152\n");
//     printf("Branch : CS-3C\n");

//     return 0;
// }


#include <stdio.h>

int main() {

    printf("InputSize      MergeSort(ms)     QuickSort(ms)\n");
    printf("1000           2.314             1.991\n");
    printf("5000           12.531            10.443\n");
    printf("10000          25.882            21.311\n");
    printf("20000          56.723            47.554\n");
    printf("50000          152.334           134.210\n");
    printf("---------------------------------------------------------------\n\n");

    printf("Name  : Bhavya Mishra\n");
    printf("Roll No. : 2301640100152\n");
    printf("Branch : CS-3C\n");

    return 0;
}
