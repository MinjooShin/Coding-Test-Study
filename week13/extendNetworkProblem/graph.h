// �����Ϸ� �ߺ� ���� ����
#ifndef GRAPH_H
#define GRAPH_H

#include "stack.h"

using namespace std;

class Graph {
public:
    // Graph constructure
    Graph(int n);
    ~Graph();

    void addEdge(int u, int v); // �� ��� ���� edge �߰�
    void dfs(int current_computer); // ���� ��忡�� dfs ����
    int countNetworks();
    int** getAdjMatrix() const;

private:
    int n; // ��� ��
    int** adjMatrix; // ���� ���
    int* visited; // �湮 ��� ���
};

#endif
