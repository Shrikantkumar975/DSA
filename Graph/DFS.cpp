// #include<bits/stdc++.h>
// using namespace std;

// int weight[10][10],i,j,k,top=0,stack[10],sv,n,visit[10],visited[10];

// void createGraph(){
//     int m;
//     cout<<"Enter the number of vertices";
//     cin>>n;
//     cout<<"Enter the number of edges";
//     cin>>m;
//     cout<<"Enter the vertices in the format (vertice1 vertices2)";
//     for(int s=0;s<=m;s++){
//         cin>>i>>j;
//         weight[]
//     }

// }




#include <iostream>
using namespace std;

int weight[10][10]; // Adjacency matrix to represent the graph
int stack[10];      // Stack to hold nodes during DFS
int top = -1;       // Stack pointer
int visited[10];    // Visited array to track visited nodes
int n;              // Number of nodes

// Function to perform DFS
void dfs(int sv) {
    // Push the starting vertex onto the stack
    stack[++top] = sv;
    visited[sv] = 1; // Mark the starting vertex as visited

    cout << "DFS Traversal: ";

    while (top != -1) { // While the stack is not empty
        int k = stack[top--]; // Pop a vertex from the stack
        cout << k << " "; // Process the vertex (e.g., print it)

        // Explore all adjacent vertices
        for (int j = 0; j < n; j++) {
            if (weight[k][j] == 1 && !visited[j]) { // Check for an edge and if not visited
                stack[++top] = j; // Push the adjacent vertex onto the stack
                visited[j] = 1;    // Mark it as visited
            }
        }
    }
}

int main() {
    // Initialize the adjacency matrix to 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            weight[i][j] = 0;
        }
    }

    // Define the number of nodes
    cout << "Enter the number of nodes (max 10): ";
    cin >> n;

    // Input edges to fill the adjacency matrix
    cout << "Enter the adjacency matrix (0 or 1):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> weight[i][j]; // Fill the adjacency matrix
        }
    }

    // Initialize visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Starting vertex for DFS
    int startVertex;
    cout << "Enter the starting vertex (0 to " << n - 1 << "): ";
    cin >> startVertex;

    // Perform DFS
    dfs(startVertex);

    return 0;
}