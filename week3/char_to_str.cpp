/*
출처: 프로그래머스
문제: 문자 리스트를 문자열로 변환하기
난이도: Level 0
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181941
*/
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(int i=0; i<arr.size(); i++){
        answer.append(arr[i]);   
    }
    return answer;
}