/*
��ó: ���α׷��ӽ�
����: ������ ǥ��
���̵�: Level2
�ð�: 30��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12924#
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0, sum = 0, i = 1, cnt = 1;

    while (cnt <= n) {
        for (; i<=n; i++) {
            sum += i;
            if (sum == n) {
                answer++;
                break;
            } else if (sum > n) break;
        } 
        cnt++;
        i = cnt;
        sum = 0;
    }
    
    return answer;
}