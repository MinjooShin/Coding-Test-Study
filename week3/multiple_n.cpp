/*
��ó: ���α׷��ӽ�
����: n�� ���
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181937
*/
#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    if(num%n == 0) answer = 1;
    else answer = 0;
    return answer;
}