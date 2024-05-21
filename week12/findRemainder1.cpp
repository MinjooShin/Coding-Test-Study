/*
출처: 프로그래머스
문제: 나머지가 1이 되는 수 찾기
난이도: Level1
시간: 7분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/87389
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<n; i++) {
        if(n%i == 1) {
            answer = i;
            break;
        } 
    }
    return answer;
}