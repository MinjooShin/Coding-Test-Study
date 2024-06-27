#include "graph.h"
#include <cstring> 

using namespace std;

// Graph Constructor
Graph::Graph(int n) : n(n) { // �����ذ�2: n(n) �߰� (n garbage value ���� �ذ�)
    // adjacency matrix �ʱ�ȭ
    adjMatrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        adjMatrix[i] = new int[n];
        memset(adjMatrix[i], 0, n*sizeof(int));
    }
    // visited �迭 �ʱ�ȭ
    visited = new int[n];
    memset(visited, 0, n*sizeof(int));
}

// Graph Destructor
Graph::~Graph() {
    // ���� �Ҵ��� ���� ������ adjMatrix �޸� ����
    for (int i = 0; i < n; i++) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    // visited �迭 �޸� ���� 
    delete[] visited;
}

void Graph::addEdge(int u, int v) {
    // undirected graph -> �� ��� ��� ���� ǥ��
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
    // const -> �ܺο��� adjMatrix�� ������ �� ������ ��.
    return adjMatrix;
}