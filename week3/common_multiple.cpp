/*
��ó: ���α׷��ӽ�
����: �����
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181936
*/
#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    return answer = (number%n == 0) && (number%m == 0) ? 1 : 0;
}