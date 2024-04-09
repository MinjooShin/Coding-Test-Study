/*
출처: 프로그래머스
문제: 접두사인지 확인하기
난이도: Level0
시간: 3분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181906
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    return my_string.substr(0, is_prefix.size()) == is_prefix;
}