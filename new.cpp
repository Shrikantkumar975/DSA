#include <iostream>
using namespace std;

#define INF 10000000
#define MAXN 100

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];






int main() {
    int V;
    cin >> V;

    int graph[MAXN][MAXN];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    initialise(V, graph);
    floydWarshall(V);

    int u = 0; // Top-left corner
    int v = V - 1; // Bottom-right corner

    int path[MAXN];
    path[0] = u;
    int index = 1;
    while (u != v) {
        u = Next[u][v];
        path[index++] = u;
    }

    printPath(path, index);

    return 0;
}











// string to hashValue;
// unsigned int calculateHash(const std::string& key,int HASH_TABLE_SIZE) {
//     unsigned int hashValue = 0;
//     for (char ch : key) {
//         hashValue = 37 * hashValue + ch; // A simple hash function
//     }
//     return hashValue % HASH_TABLE_SIZE; // Reduce hash value to fit within table size
// }