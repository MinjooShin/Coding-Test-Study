/*
출처: 프로그래머스
문제: 배열 만들기5
난이도: Level0
시간: 15분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181912
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for (string it : intStrs) {
        string nums;
        for (int i=s; i<s+l; i++) {
            nums += it[i];
        }
        if (stoi(nums) > k) answer.push_back(stoi(nums));
    }
    return answer;
}