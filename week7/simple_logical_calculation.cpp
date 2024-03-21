/*
출처: 프로그래머스
문제: 간단한 논리 연산
난이도: Level0
시간: 분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181917
*/
#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    return ((x1 || x2) && (x3 || x4))? true : false;
}