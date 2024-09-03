/*
출처: 소프티어
문제: 우물 안 개구리
난이도: Level3
시간: 40분
주소: https://softeer.ai/app/assessment/index.html?xid=260418&xsrfToken=aZXcjZ2yjSAIPvILNPSB67wSNizBIMeg&testType=practice
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include <unordered_set>

using namespace std;

int main(int argc, char** argv)
{
    int n, m, w, i=0;
    cin >> n >> m;
    cin.ignore();
    
    string ws;
    vector<int> users_w;
    // 해시 테이블 자료구조 사용. 해시 값으로 요소를 검색하는 시간 O(1) 소요.
    unordered_set<int> result;
    
    getline(cin, ws);
    istringstream iss(ws);
    while (iss >> w) {
        users_w.push_back(w);
        // 미리 저장해두고, 삭제하기
        result.insert(i);
        i++;
    }

    int u1_w, u2_w, cnt;
    for (int j=0; j<m; j++) {
        cin >> u1_w >> u2_w;
        // user1 무게가 더 클 경우, user2 제거
        if (users_w[u1_w-1] > users_w[u2_w-1]) {
            result.erase(u2_w-1);
        // user2 무게가 더 클 경우, user1 제거
        } else if (users_w[u1_w-1] < users_w[u2_w-1]) {
            result.erase(u1_w-1);
        } else {
            result.erase(u1_w-1);
            result.erase(u2_w-1);
        }
    }
    cout << result.size();
   return 0;
}