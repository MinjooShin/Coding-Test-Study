/*
출처: 프로그래머스
문제: 문자열 겹쳐쓰기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181943
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string;
    for(int i = 0; i < my_string.length(); i++){
        if(i >= s && i < (overwrite_string.length() + s)) answer[i] = overwrite_string[i-s];
    }
    return answer;
}