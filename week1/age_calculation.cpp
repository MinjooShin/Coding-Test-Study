/*
출처: 프로그래머스
문제: [PCCE 기출문제] 3번 / 나이 계산
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/250131
*/
#include <iostream>

using namespace std;

int main(void) {
    int year, answer;
    string age_type;
    cin >> year >> age_type;

    if (age_type == "Korea") {
        answer = 2030 - year + 1;
    }
    else if (age_type == "Year") {
        answer = 2030 - year;
    }

    cout << answer << endl;
    return 0;
}