/*
출처: 프로그래머스
문제: 콜라츠 수열 만들기
난이도: Level0
시간: 5분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181919
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while (n != 1) {
        n = (n%2==0)? (n/2) : (3*n+1);
        answer.push_back(n);
    }
    return answer;
}