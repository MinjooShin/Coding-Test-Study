/*
출처: 프로그래머스
문제: 배열 만들기2
난이도: Level0
시간: 25분
주소: https://school.programmers.co.kr/learn/courses/30/lessons/181921
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string ntos;
    bool flag;
    for (; l<=r; l++) {
        flag = true;
        ntos = to_string(l);
        for (int i=0; i<ntos.length(); i++) {
            if(ntos[i] != '0' && ntos[i] != '5') flag = false;
        }
        if (flag) answer.push_back(stoi(ntos)); 
    }
    if (answer.empty()) answer.push_back(-1);

    return answer;
}

// update code
vector<int> solution(int l, int r) {
    vector<int> answer;
    int temp;
    bool flag = true;
    for (int i=l; i<=r; i++) {
        temp = i;
        flag = true;
        while (temp>0) {
            if(temp%10 != 5 && temp%10 != 0) {
                flag = false;
                break;
            }
            temp /= 10;
        }
        if (flag) answer.push_back(i);
    }
    if (answer.empty()) answer.push_back(-1);

    return answer;
}