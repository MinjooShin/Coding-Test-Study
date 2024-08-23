/*
출처: [한빛미디어] 이것이 취업을 위한 코딩 테스트다 with 파이썬
문제: 미로 탈출
난이도: Level1.5
알고리즘: BFS
*/
#include<iostream>
#include<queue>

using namespace std;

int n,m;
int graph[201][201];

// 이동할 네가지 방향 정의
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    // 큐가 빌 때까지 반복하기
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 미로 찾기 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 괴물인 경우 무시
            if (graph[nx][ny] == 0) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y]+1;
                q.push({nx, ny});
            }
        }
    }
    return graph[n-1][m-1];
}

int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d", &graph[i][j]);
        }
    }
    // 가장 오른쪽 아래까지의 최단 거리 반환
    cout << bfs(0, 0) << endl;
    return 0;
} 