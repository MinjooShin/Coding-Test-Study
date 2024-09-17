/*
출처: 백준
문제: 요세푸스 문제
난이도: 알고리즘 기초1
시간: 60+분
주소: https://www.acmicpc.net/problem/1158
*/
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    vector<int> v;
    // 1. 1-n 큐에 push
    for (int i=1; i<=n; i++) q.push(i);
    
    int cnt = 0;
    while (!q.empty()) {
        // 2. k-1이면 벡터 저장
        if (cnt == k-1) {
            v.push_back(q.front());
            q.pop();
            cnt = 0;
        // 3. k-1이 아니면, pop하고 push
        } else {
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    cout << "<";
    for(int i=0; i<v.size(); i++) {
        if (i==v.size()-1) cout << v[i];
        else cout << v[i] << ", ";
    }
    cout << ">";
    return 0;
}