/*
출처: 프로그래머스
문제: [PCCE 기출문제] 문자열 반복해서 출력하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181952
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    for(int i = 0; i < n; i++) cout << str;

    return 0;
}