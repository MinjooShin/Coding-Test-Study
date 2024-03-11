/*
출처: 프로그래머스
문제: 이어 붙인 수
난이도: Level 0
시간: 6분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181928
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string even = "", odd = "";
    
    for (auto num: num_list) {
        (num % 2 != 0)? odd += to_string(num) : even += to_string(num);
    }
    return stoi(odd) + stoi(even);
}