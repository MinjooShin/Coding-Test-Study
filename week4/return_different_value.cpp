/*
출처: 프로그래머스
문제: flag에 따라 다른 값 반환하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181933
*/
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    return flag? a+b:a-b;
}