/*
출처: 백준
문제: 스택 수열
난이도: 알고리즘 기초1
시간: 50분
주소: https://www.acmicpc.net/problem/1874
*/
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    cin.ignore();

    stack<int> st;
    vector<char> v;
    int cnt = 1;
    // n번 반복
    for (int i=0; i<n; i++) {
        cin >> x;
        
        // 스택의 최상단 값을 수열 값으로 만들어 놓기 위해 cnt-x 까지 푸시
        while (cnt <= x) {
            st.push(cnt);
            cnt++;
            v.push_back('+');
        }

        // 스택의 최상단 값과 수열 값이 같다면 꺼냄
        if (st.top() == x) {
            st.pop();
            v.push_back('-');
        } 
        // 스택의 최상단 값이 수열 값 보다 더 크면 스택의 순서가 바뀌기 때문에 불가능
        else {
            cout << "NO";
            return 0;
        }
    }
    // endl: 개행 + 버퍼 flush -> 시간초과 발생
    for (int i=0; i<v.size(); i++) cout << v[i] << '\n';

    return 0;
}