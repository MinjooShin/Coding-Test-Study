/*
출처: 프로그래머스
문제: 피보나치 수
난이도: Level2
시간: 40분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/12945
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getDpFibo(int n) {
    vector<int> fiboVec;
    fiboVec.push_back(0);
    fiboVec.push_back(1);
    if (n > 1) {
        for (int i=2; i<=n; i++) {
            fiboVec.push_back((fiboVec[i-1] + fiboVec[i-2]) % 1234567);
        }  
    }
    return fiboVec[n];
}

int solution(int n) {
    return getDpFibo(n);
}