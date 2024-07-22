/*
��ó: ���α׷��ӽ�
����: �Ǻ���ġ ��
���̵�: Level2
�ð�: 40��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12945
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