/*
출처: 프로그래머스
문제: 약수의 합
난이도: Level1
시간: 3분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12928
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<=n; i++) {
        if (n%i == 0) answer += i;
    }
    return answer;
}