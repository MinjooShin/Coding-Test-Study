/*
출처: 프로그래머스
문제: 문자열 여러 번 뒤집기
난이도: Level0
시간: 30분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181913
*/
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    char tmp;
    for (auto query : queries) {
        for (int i=0; i<=(query[1]-query[0])/2; i++) {
            tmp = my_string[query[0]+i];
            my_string[query[0]+i] = my_string[query[1]-i];
            my_string[query[1]-i] = tmp;
        }
    }
    return my_string;
}

// update code
#include <algorithm>
string solution(string my_string, vector<vector<int>> queries) {
    for(const auto& q : queries)
    {
        reverse(my_string.begin()+q[0],my_string.begin()+q[1]+1);
    }
    return my_string;
}