/*
출처: 프로그래머스
문제: 문자열 돌리기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181945
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++) cout << str[i] << endl;

    return 0;
}