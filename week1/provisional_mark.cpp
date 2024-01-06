/*
출처: 프로그래머스
문제: [PCCE 기출문제] 6번 / 가채점
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/250128
*/
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<int> numbers, vector<int> our_score, vector<int> score_list) {
    int num_student = numbers.size();
    vector<string> answer(num_student);
    
    for (int i = 0; i < num_student; i++) {
        if (our_score[i] == score_list[numbers[i]-1]) {
            answer[i] = "Same";
        }
        else {
            answer[i] = "Different";
        }
    }
    
    return answer;
}