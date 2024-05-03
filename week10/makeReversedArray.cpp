/*
출처: 프로그래머스
문제: 자연수 뒤집어 배열로 만들기
난이도: Level1
시간: 5분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12932?language=cpp
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    string s = to_string(n);
    vector<int> answer(s.length());
    int rev_idx =  s.length() - 1;
    
    for (auto c : s) {
        answer[rev_idx] = c - '0';
        rev_idx--;
    } 
    return answer;
}