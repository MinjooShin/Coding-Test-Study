/*
출처: 프로그래머스
문제: 문자열의 앞의 n글자
난이도: Level0
시간: 2분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181907
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i=0; i<n; i++) answer += my_string[i];
    return answer;
}

// update code
string solution(string my_string, int n)
{
    return my_string.substr(0, n);
}
