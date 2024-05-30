/*
출처: 프로그래머스
알고리즘: 깊이/너비 우선 탐색(DFS/BFS)
문제: 네트워크
난이도: Level3
시간: 50분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/43162
*/

#include <string>
#include <vector>

using namespace std;
vector<int> visited;

void dfs(int current_computer, int n, vector<vector<int>> computers) {
    visited[current_computer] = 1;
    
    for(int i=0; i<n; i++) {
        if (visited[i] == 0 && computers[current_computer][i] == 1) dfs(i, n, computers);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    visited.assign(3,0);
    for (int i=0; i<n; i++) {
        if (!visited[i]) {
            dfs(i, n, computers);
            answer++;
        }
    }
    return answer;
}