/*
출처: 프로그래머스
문제: 문자 개수 세기
난이도: Level0
시간: 20분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181902
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    int idx;
    for (int i=0; i<my_string.length(); i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') idx = int(my_string[i]) - 'A';  
        else if (my_string[i] >= 'a' && my_string[i] <= 'z') idx = (int(my_string[i]) - 'a') + 26;   
        answer[idx] += 1; 
    }
    return answer;
}