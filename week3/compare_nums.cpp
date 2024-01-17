/*
출처: 프로그래머스
문제: 두 수의 연산값 비교하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181938
*/
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0, ab = 0, ab2 = 0;
    ab = stoi(to_string(a) + to_string(b));
    ab2 = 2 * a * b;
    if(ab >= ab2) answer = ab;
    else answer = ab2;
    return answer;
}
