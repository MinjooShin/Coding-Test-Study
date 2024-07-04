/*
��ó: ���α׷��ӽ�
����: ���� ��ȯ �ݺ��ϱ�
���̵�: Level2
�ð�: 40��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/70129
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int zeroCnt = 0, loopCnt = 0;

// 0�� �����ϰ�, ���� ��ȯ
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