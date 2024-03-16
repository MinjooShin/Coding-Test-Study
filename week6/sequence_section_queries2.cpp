/*
출처: 프로그래머스
문제: 수열과 구간 쿼리2
난이도: Level0
시간: 60분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181923
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int min=10000000;
    for (auto q : queries) {
        min = 10000000;

        for (int i=q[0]; i<=q[1]; i++) {
            if (arr[i] > q[2] && min > arr[i]) min = arr[i];
        }
        if (min == 10000000) answer.push_back(-1);
        else answer.push_back(min);
    }
    return answer;
}