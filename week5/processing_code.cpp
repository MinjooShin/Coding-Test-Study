/*
출처: 프로그래머스
문제: 코드 처리하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181932
*/
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;

    for (int i=0; i<code.length(); i++) {
        if (mode == false) {
            if (code[i] != '1') {
                if (i % 2 == 0) answer += code[i]; 
            }
            else mode = true;
        }
        else {
            if (code[i] != '1') {
                if (i % 2 != 0) answer += code[i];   
            }
            else mode = false;
        }
    }
    if (answer.length() == 0) return "EMPTY";
    else return answer;
}