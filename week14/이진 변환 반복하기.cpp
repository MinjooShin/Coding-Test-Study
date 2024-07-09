/*
출처: 프로그래머스
문제: 이진 변환 반복하기
난이도: Level2
시간: 40분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/70129
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int zeroCnt = 0, loopCnt = 0;

// 0을 제거하고, 개수 반환
int removeZero(const string& str) {
    int nonZeroCnt = 0;
    for (auto c : str) {
        if (c == '0') zeroCnt++;
        else nonZeroCnt++;
    }
    return nonZeroCnt;
}

string getBinary(int length) {
    string binary;
    
    while (length > 0) {
        binary = to_string(length % 2) + binary;
        length = length / 2;
    }
    return binary;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    while (s.length() > 1) {
        s = getBinary(removeZero(s));
        cout << "result: " << s << endl;
        loopCnt ++;
    }
    
    answer.push_back(loopCnt);
    answer.push_back(zeroCnt);
    return answer;
}