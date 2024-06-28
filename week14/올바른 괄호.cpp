/*
출처: 프로그래머스
문제: 올바른 괄호
난이도: Level2
시간: 40분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12909
*/
#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> v;

    for (char c : s) {
        if (c == '(') v.push_back(c);
        else {
            if (v.empty()) return false;
            else v.pop_back(); 
        }
    }

    return v.empty();
}