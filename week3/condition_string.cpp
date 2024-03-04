/*
출처: 프로그래머스
문제: 조건 문자열
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181934
*/
#include <string>
#include <vector>

using namespace std;

string decide_ineq(string ineq){
    return ineq == "<" ? "<" : ">";
}

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if(eq == "="){
        return answer = decide_ineq(ineq) == ">" ? n >= m : n <= m;
    } 
    else{
        return answer = decide_ineq(ineq) == ">" ? n > m : n < m;
    }
}