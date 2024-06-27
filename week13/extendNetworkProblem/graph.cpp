#include "graph.h"
#include <cstring> 

using namespace std;

// Graph Constructor
Graph::Graph(int n) : n(n) { // 에러해결2: n(n) 추가 (n garbage value 문제 해결)
    // adjacency matrix 초기화
    adjMatrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        adjMatrix[i] = new int[n];
        memset(adjMatrix[i], 0, n*sizeof(int));
    }
    // visited 배열 초기화
    visited = new int[n];
    memset(visited, 0, n*sizeof(int));
}

// Graph Destructor
Graph::~Graph() {
    // 동적 할당한 이중 포인터 adjMatrix 메모리 해제
    for (int i = 0; i < n; i++) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    // visited 배열 메모리 해제 
    delete[] visited;
}

void Graph::addEdge(int u, int v) {
    // undirected graph -> 두 노드 모두 연결 표시
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

void Graph::dfs(int current_computer) {
    Stack st;
    st.push(current_computer);

    while (!st.isEmpty()) {
        int current_computer = st.pop();

        if (!visited[current_computer]) {
            visited[current_computer] = 1;

            for (int i = 0; i < n; i++) {
                if (!visited[i] && adjMatrix[current_computer][i] == 1) {
                    st.push(i);
                }
            }
        }
    }
}

int Graph::countNetworks() {
    int cnt = 0;
    memset(visited, 0, n * sizeof(int));

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}

int** Graph::getAdjMatrix() const {
    // const -> 외부에서 adjMatrix를 수정할 수 없도록 함.
    return adjMatrix;
}