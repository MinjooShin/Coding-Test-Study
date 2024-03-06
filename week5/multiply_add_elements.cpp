/*
출처: 프로그래머스
문제: 원소들의 곱과 합
난이도: Level 0
시간: 10분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181929
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int mul = 1, sum = 0;
    
    for (auto num: num_list) {
        mul *= num;
        sum += num;
    }
    sum *= sum;
    if (mul < sum) return 1;
    else return 0;
}