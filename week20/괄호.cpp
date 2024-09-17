/*
출처: 백준
문제: 괄호
난이도: 알고리즘 기초1
시간: 30분
주소: https://www.acmicpc.net/problem/9012
*/
#include<iostream>
#include<stack>

using namespace std;

int main() {
    int t, cnt = 0;
    cin >> t;

    string str, result;
    for (int i=0; i<t; i++) {
        stack<char> st;
        cin >> str;
        for (int j=0; j<str.length(); j++) {
            if (str[j] == '(') st.push(str[j]);
            else if (!st.empty() && str[j] == ')') st.pop();
            else cnt++;
        }
        result = (st.empty() && cnt == 0)? "YES" : "NO";
        cout << result << endl;
        cnt = 0;
    }
    return 0;
}