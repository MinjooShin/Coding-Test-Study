/*
출처: 프로그래머스
문제: 글자 지우기
난이도: Level0
시간: 30분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181900
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(const auto v : indices)
    {
        my_string[v] = ' ';
    }
    for(const auto c : my_string)
    {
        if(c != ' ')
        {
            answer += c;
        }
    }
    return answer;
}
