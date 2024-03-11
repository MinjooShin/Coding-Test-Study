/*
출처: 프로그래머스
문제: 마지막 두 원소
난이도: Level0
시간: 20분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181927
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    
    int last1 = num_list.back();
    num_list.pop_back();
    int last2 = num_list.back();
    int last0 = (last1 > last2)? (last1 - last2) : (last1 * 2);
    answer.push_back(last0);
    
    return answer;
}