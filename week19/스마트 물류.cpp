/*
출처: 소프티어
문제: 스마트 물류
난이도: Level3
시간: 60+분
주소: https://softeer.ai/app/assessment/index.html?xid=262052&xsrfToken=YtvDXFq7vZJwKTwjSQSJobwndzZTUnyd&testType=practice
*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    int n, k;
    cin >> n >> k;

    string line;
    cin >> line;
    vector<bool> visited(n, false); // 부품 사용 여부 확인 위한 배열
    int count = 0; // 부품을 집을 수 있는 로봇 최대 개수

    for (int i=0; i<n; i++) {
        if (line[i] == 'P') // 로봇을 만나면
            for (int j=max(0, i-k); j<=min(n-1,i+k); j++) { // 로봇의 좌우 k범위 내에서 가까운 순서로 부품 찾음
                if (line[j] == 'H' && !visited[j]) { // 현재 인덱스에 부품이 있고, 방문한 적이 없을 경우
                    visited[j] = true;
                    count++;
                    break; // 가장 가까운 부품을 집었으므로, 다른 부품은 탐색할 필요 없음.
                }
            }
    }
    cout << count << endl;
   return 0;
}