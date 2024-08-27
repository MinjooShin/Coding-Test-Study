/*
출처: 소프티어
문제: 장애물 인식 프로그램
난이도: Level2
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=255580&xsrfToken=AwS9ew1VFS8lM2WnjGiKFjXCPgAQZSf0&testType=practice
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int graph[25][25];
vector<int> cnts;
int inner_block_cnt = 0;

bool dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= n) return false;
    if (graph[x][y] == 1) {
        // 현재 장애물 노드 방문 처리
        graph[x][y] = 0;
        dfs(x-1, y);
        dfs(x, y-1);
        dfs(x+1, y);
        dfs(x, y+1);
        inner_block_cnt++;
        return true;
    }
    return false;
}

int main(int argc, char** argv)
{
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%1d", &graph[i][j]);
        }
    }
    int block_cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (dfs(i, j)) {
                block_cnt++;
                cnts.push_back(inner_block_cnt);
                inner_block_cnt = 0;
            }
        }
    }
    cout << block_cnt << endl;
    sort(cnts.begin(), cnts.end());
    for (auto cnt : cnts) {
        cout << cnt << endl;
    }
   return 0;
}