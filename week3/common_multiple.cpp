/*
출처: 프로그래머스
문제: 공배수
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181936
*/
#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    return answer = (number%n == 0) && (number%m == 0) ? 1 : 0;
}