// 컴파일러 중복 선언 방지
#ifndef GRAPH_H
#define GRAPH_H

#include "stack.h"

using namespace std;

class Graph {
public:
    // Graph constructure
    Graph(int n);
    ~Graph();

    void addEdge(int u, int v); // 두 노드 사이 edge 추가
    void dfs(int current_computer); // 현재 노드에서 dfs 수행
    int countNetworks();
    int** getAdjMatrix() const;

private:
    int n; // 노드 수
    int** adjMatrix; // 인접 행렬
    int* visited; // 방문 노드 기록
};

#endif
