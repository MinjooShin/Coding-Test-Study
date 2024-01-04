/*
출처: 프로그래머스
문제: [PCCE 기출문제] 4번 / 저축
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/250130
*/
#include <iostream>

using namespace std;

int main(void) {
    int start;
    int before;
    int after;
    cin >> start >> before >> after;

    int money = start;
    int month = 1;

    while (money < 70) {
        money += before;
        month++;
    }
    while (money < 100) {
        money += after;
        month++;
    }
    cout << month << endl;
    return 0;
}