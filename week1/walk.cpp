/*
출처: 프로그래머스
문제: [PCCE 기출문제] 5번 / 산책
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/250129
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string route) {
    int east = 0;
    int north = 0;
    vector<int> answer(2);
    for(int i=0; i<route.length(); i++){
        switch(route[i]){
            case 'N':
                north++;
                break;
            case 'S':
                north--;
                break;
            case 'E':
                east++;
                break;
            case 'W':
                east--;
                break;
        }
    }
    answer[0] = east;
    answer[1] = north;
    return answer;
}