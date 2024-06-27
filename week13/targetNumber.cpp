/*
출처: 프로그래머스
알고리즘: 깊이/너비 우선 탐색(DFS/BFS)
문제: 타켓넘버
난이도: Level2
시간: 1시간
주소: https://school.programmers.co.kr/learn/courses/30/lessons/43165
*/

// rescursion version
#include <string>
#include <vector>

using namespace std;
int answer = 0;

void get_target_number(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
        return;
    }
    get_target_number(numbers, target, sum + numbers[index], index + 1);
    get_target_number(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    get_target_number(number, target, 0, 0);
    return answer;
}

// stack versions
#include <stack>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer=0;
    stack<pair<int, int>> s;
    s.push({0,0});
    
    while(!s.empty()) {
        auto [current_sum, index] = s.top();
        s.pop();
        if (index == numbers.size()) {
            if (current_sum == target) answer++;
        } else {
            s.push({current_sum + numbers[index], index+ 1});
            s.push({current_sum - numbers[index], index + 1});
        }
    }
    return answer;
}