/*
출처: 프로그래머스
문제: 문자열 뒤집기
난이도: Level0
시간: 15분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181905
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string subS = my_string.substr(s, e-s+1);
    reverse(subS.begin(), subS.end());
    my_string.replace(s, e-s+1, subS);
    return my_string;
}

// update code
string solution(string my_string, int s, int e) {
    reverse(my_string.begin()+s, my_string.begin()+e+1);
    return my_string;
}