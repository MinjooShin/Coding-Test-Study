/*
출처: 프로그래머스
문제: 정수 내림차순으로 배치하기
난이도: Level1
시간: 10분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12933
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    string s = to_string(n);
    int mul = 1;
    
    for (auto c : s) {
        v.push_back(c - '0');
    }
    sort(v.begin(), v.end(), greater<int>());
    
    for (int i=0; i<v.size(); i++) {
        answer += v[v.size()-1-i] * mul;
        mul *= 10;
    }
    
    return answer;
}

// update code
#include <functional>

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
    answer = stoll(str);
    
    return answer;
}