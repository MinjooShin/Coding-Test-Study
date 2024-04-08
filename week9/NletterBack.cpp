/*
출처: 프로그래머스
문제: 문자열의 뒤의 n글자
난이도: Level0
시간: 5분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181910
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i=my_string.size()-n; i<my_string.size(); i++) answer += my_string[i];
    return answer;
}

// update code
// string 헤더파일의 substr 함수 사용

string solution(string my_string, int n) {
    string answer = "";
    answer = my_string.substr(my_string.length() - n);
    return answer;
}