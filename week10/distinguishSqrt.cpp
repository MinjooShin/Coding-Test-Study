/*
��ó: ���α׷��ӽ�
����: ���� ������ �Ǻ�
���̵�: Level1
�ð�: 15��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12934
*/

#include <string>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int sq = trunc(sqrt(n)); 
    answer = (sqrt(n) == sq)? pow(sq+1, 2) : -1;

    return answer;
}