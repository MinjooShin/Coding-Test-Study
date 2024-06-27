#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring> 
#include "graph.h"

using namespace std;

/*
    connections 와 adjMatrix 배열은 동일함. 그치만, 사용 목적이 다름. 
    connections ->랜덤으로 그래프 연결 정보 초기화하기 위한 임시 배열, 자기자신은 1로 되어있음.
    connections 배열을 기반으로 Graph 클래스의 graph 인스턴스의 adjacency matrix 완성
*/
int** setConnections(int n) {
    /*
        int** computers = new int*[n];
        - 동적으로 2차원 배열 할당 문법 사용
        - int* 타입의 포인터가 n개 있는 배열 할당
        - 즉, 각 포인터는 2차원 배열의 각 행을 가리킴
    */
    int** computers = new int*[n];
    for (int i = 0; i < n; ++i) {
        computers[i] = new int[n];
        memset(computers[i], 0, n*sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // 1이 너무 자주 나와서 test 위해 수정 (1 -> 30%, 0 -> 약 70%)
            int connection = (rand() % 10 < 3) ? 1 : 0;
            //int connection = rand() % 2; // 0-1 랜덤 넘버
            
            // undirected graph -> 두 컴퓨터 모두 서로에 대한 같은 연결 정보를 갖고 있어야함
            computers[i][j] = connection;
            computers[j][i] = connection; 
        }
        // 각 컴퓨터 자신과는 디폴트 연결되어 있음
        computers[i][i] = 1;
    }

    return computers;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int n = rand() % 8 + 3; // 3-10 랜덤 넘버
    int** connections = setConnections(n);

    // n개 노드 가지는 Graph 객체 생성
    Graph graph(n);

    // conncections -> adjacency matrix 
    // 에러해결1: j = 0 -> j = i+1 (간선이 중복으로 생성되는 문제 해결)
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

    // 동적 할당된 메모리 해제
    for (int i = 0; i < n; ++i) {
        delete[] connections[i];
    }
    delete[] connections;

    return 0;
}
