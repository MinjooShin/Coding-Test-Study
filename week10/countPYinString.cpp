/*
출처: 프로그래머스
문제: 문자열 내 p와 y의 개수
난이도: Level1
시간: 10분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12916
*/

#include <string>
#include <cctype>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cntp = 0, cnty = 0;
    for (auto c: s) {
        c = tolower(c);
        (c == 'p')? cntp++ : (c == 'y')? cnty++ : 0;
    }
    return (cntp == cnty)? true : false;
}