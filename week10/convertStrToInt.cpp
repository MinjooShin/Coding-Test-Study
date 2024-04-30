/*
출처: 프로그래머스
문제: 문자열을 정수로 바꾸기
난이도: Level1
시간: 1분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12925
*/
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string scpy = s;
    int answer = stoi(scpy);
    return answer;
}