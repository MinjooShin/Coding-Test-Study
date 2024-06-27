/*
��ó: ���α׷��ӽ�
�˰���: ����/�ʺ� �켱 Ž��(DFS/BFS)
����: ��Ʈ��ũ
���̵�: Level3
�ð�: 50��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/43162
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