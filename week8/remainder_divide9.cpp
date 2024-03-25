/*
출처: 프로그래머스
문제: 9로 나눈 나머지
난이도: Level0
시간: 20분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181914
*/
#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (auto digit : number) {
        answer += int(digit) - '0';
    }
    return answer %= 9;
}