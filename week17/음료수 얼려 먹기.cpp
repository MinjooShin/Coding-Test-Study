/*
출처: [한빛미디어] 이것이 취업을 위한 코딩 테스트다 with 파이썬
문제: 음료수 얼려 먹기
난이도: Level1.5
알고리즘: DFS
*/
#include<iostream>
#include<string>

using namespace std;

int n, m;
int graph[1001][1001];

// DFS로 특정 노드를 방문하고 연결된 모든 노드들도 방문
bool dfs(int x, int y) {
    // 주어진 범위를 벗어나는 경우 즉시 종료
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return false;
    }
    // 현재 노드를 아직 방문하지 않았다면
    if (graph[x][y] == 0) {
        // 현재 노드 방문 처리
        graph[x][y] = 1;
        // 상 하 좌 우 위치들도 모두 재귀적으로 호출
        dfs(x-1, y);
        dfs(x, y-1);
        dfs(x+1, y);
        dfs(x, y+1);
        return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    // 2차원 맵 정보 입력 받기
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d", &graph[i][j]);
        } 
    }
    int result = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            // 현재 노드에서 DFS 수행해서 인접한 노드가 있는 경우만 카운트
            if (dfs(i, j)) {
                result++;
            }
        }
    }
    cout << result << endl;

}
