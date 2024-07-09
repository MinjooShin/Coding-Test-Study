/*
출처: 프로그래머스
문제: JadenCase 문자열 만들기
난이도: Level2
시간: 40분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12951
*/
#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

string solution(string s) {
    vector<char> result;
    
    for (int i=0; i<s.length(); i++) {
        // 숫자가 아닐 경우
        if (isdigit(s[i]) == 0) {
            // 알파벳일 경우 -> 문자열의 첫문자일 경우
            if (isalpha(s[i]) > 0) {
                if (s[i-1] == ' ' || i == 0) result.push_back(toupper(s[i]));
                else result.push_back(tolower(s[i]));
            // 숫자가 아닌데 알파벳도 아닌경우
            } else result.push_back(s[i]); 
        // 숫자일 경우
        } else result.push_back(s[i]);
    }    
    string answer(result.begin(), result.end());
    
    return answer;
}

// update code
string solution(string s) {
    string answer = ""; 
    
    answer += toupper(s[0]);
    for (int i=1; i<s.length(); i++) {
        answer += (s[i-1] == ' ')? toupper(s[i]) : tolower(s[i]);
    }    
    return answer;
}