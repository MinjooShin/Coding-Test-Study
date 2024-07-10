/*
출처: 프로그래머스
문제: 짝지어 제거하기
난이도: Level2
시간: 30분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12973
*/

// efficiency failure version
#include <iostream>
#include <string>

using namespace std;

string findSameAlpha(string s) {
    for (int i=0; i<s.length(); i++) {
        if (s[i-1] == s[i]) {
            s.erase(i-1, 2);
            break;
        } 
    }
    return s;
}

int solution(string s)
{
    int size;
    if ((s.length() % 2) == 1) return 0;
    while (true) {
        size = s.length();
        s = findSameAlpha(s);
        if (size == s.length()) break; 
    }
    return s.length() == 0? 1 : 0;
}

// update code
#include <stack>

int solution(string s)
{
    stack<char> st;
    for (int i=0; i<s.length(); i++) {
        if (st.empty()) st.push(s[i]);
        else (st.top() == s[i])? st.pop() : st.push(s[i]);
    }
    return st.size() == 0? 1 : 0;
}