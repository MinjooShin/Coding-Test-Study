/*
출처: 프로그래머스
문제: 문자열 곱하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181940
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer="";
    for(int i=0; i<k; i++) answer += my_string;
    return answer;
}