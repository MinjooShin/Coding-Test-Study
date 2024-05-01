/*
출처: 프로그래머스
문제: 자릿수 더하기
난이도: Level1
시간: 2분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12931
*/

#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    while (n > 0) {
        answer += (n%10);
        n /= 10;
    }

    return answer;
}

// another creative way
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    
    for (char d : s) {
        answer += d - '0';
    }

    return answer;
}