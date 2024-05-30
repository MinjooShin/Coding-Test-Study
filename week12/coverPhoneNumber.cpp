/*
출처: 프로그래머스
문제: 핸드폰 번호 가리기
난이도: Level1
시간: 5분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12948
*/
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    for (int i=0; i<phone_number.length()-4; i++) {
        phone_number[i] = '*';
    }
    return phone_number;
}