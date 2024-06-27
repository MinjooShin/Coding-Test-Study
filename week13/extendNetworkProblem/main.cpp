#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring> 
#include "graph.h"

using namespace std;

/*
    connections �� adjMatrix �迭�� ������. ��ġ��, ��� ������ �ٸ�. 
    connections ->�������� �׷��� ���� ���� �ʱ�ȭ�ϱ� ���� �ӽ� �迭, �ڱ��ڽ��� 1�� �Ǿ�����.
    connections �迭�� ������� Graph Ŭ������ graph �ν��Ͻ��� adjacency matrix �ϼ�
*/
int** setConnections(int n) {
    /*
        int** computers = new int*[n];
        - �������� 2���� �迭 �Ҵ� ���� ���
        - int* Ÿ���� �����Ͱ� n�� �ִ� �迭 �Ҵ�
        - ��, �� �����ʹ� 2���� �迭�� �� ���� ����Ŵ
    */
    int** computers = new int*[n];
    for (int i = 0; i < n; ++i) {
        computers[i] = new int[n];
        memset(computers[i], 0, n*sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // 1�� �ʹ� ���� ���ͼ� test ���� ���� (1 -> 30%, 0 -> �� 70%)
            int connection = (rand() % 10 < 3) ? 1 : 0;
            //int connection = rand() % 2; // 0-1 ���� �ѹ�
            
            // undirected graph -> �� ��ǻ�� ��� ���ο� ���� ���� ���� ������ ���� �־����
            computers[i][j] = connection;
            computers[j][i] = connection; 
        }
        // �� ��ǻ�� �ڽŰ��� ����Ʈ ����Ǿ� ����
        computers[i][i] = 1;
    }

    return computers;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int n = rand() % 8 + 3; // 3-10 ���� �ѹ�
    int** connections = setConnections(n);

    // n�� ��� ������ Graph ��ü ����
    Graph graph(n);

    // conncections -> adjacency matrix 
    // �����ذ�1: j = 0 -> j = i+1 (������ �ߺ����� �����Ǵ� ���� �ذ�)
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (connections[i][j] == 1) {
                graph.addEdge(i, j);
            }
        }
    }
    
    int** adjMatrix = graph.getAdjMatrix();
    cout << "Number of nodes: " << n << endl;
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "Number of computers: " << n << endl;
    cout << "Computers connection matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << connections[i][j] << " ";
        }
        cout << endl;
    }

    int result = graph.countNetworks();
    cout << "Number of networks: " << result << endl;

    // ���� �Ҵ�� �޸� ����
    for (int i = 0; i < n; ++i) {
        delete[] connections[i];
    }
    delete[] connections;

    return 0;
}
