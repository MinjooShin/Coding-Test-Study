/*
출처: 백준
문제: 큐
난이도: 알고리즘 기초1
시간: 20분
주소: https://www.acmicpc.net/problem/10845
*/
#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    for (int i=0; i<n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int p;
            cin >> p;
            q.push(p);
        } else if (cmd == "front") {
            if (!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        } else if (cmd == "back") {
            if (!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
        } else if (cmd == "size") cout << q.size() << endl;
        else if (cmd == "pop") {
            if (!q.empty()) {
                cout << q.front() << endl; q.pop();
            } else cout << -1 << endl;
        } else {
            if (!q.empty()) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
