/*
출처: 프로그래머스
문제: 배열 만들기4
난이도: Level0
시간: 20분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181918
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i=0;
    while (i<arr.size()) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
            i++;
        }
        else{
            if (stk.back() < arr[i]) {
                stk.push_back(arr[i]);
                i++;
            }
            else stk.pop_back();
        }
    }
    return stk;
}