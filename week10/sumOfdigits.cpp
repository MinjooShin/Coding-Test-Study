/*
��ó: ���α׷��ӽ�
����: �ڸ��� ���ϱ�
���̵�: Level1
�ð�: 2��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12931
*/

#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    while (n > 0) {
        answer += (n%10);
        n /= 10;
    }

    return answer;
}

// another creative way
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    
    for (char d : s) {
        answer += d - '0';
    }

    return answer;
}