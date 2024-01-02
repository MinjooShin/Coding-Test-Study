/*
출처: 프로그래머스
문제: [PCCE 기출문제] 2번 / 피타고라스의 정리
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/250132
*/
#include <iostream>

using namespace std;

int main(void){
    int a;
    int c;
    cin >> a >> c;

    int b_square = (c*c) - (a*a);
    cout << b_square << endl;

    return 0;
}