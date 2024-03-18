/*
출처: 프로그래머스
문제: 수열과 구간 쿼리3
난이도: Level0
시간: 20분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181924
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int tmp = 0;
    for (int i=0; i<queries.size(); i++) {
        tmp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = tmp;
    }
    return arr;
}

// update code
vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for(const auto& q : queries) swap(arr[q[0]],arr[q[1]]);
    
    return arr;
}