/*
출처: 프로그래머스
문제: 글자 이어 붙여 문자열 만들기
난이도: Level0
시간: 2분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181915
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for (int idx : index_list) {
        answer += my_string[idx];
    }
    return answer;
}