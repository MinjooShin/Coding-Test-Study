/*
��ó: ���α׷��ӽ�
����: �� ũ�� ��ġ��
���̵�: Level 0
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181939
*/
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0, ab = 0, ba = 0;
    ab = stoi(to_string(a) + to_string(b));
    ba = stoi(to_string(b) + to_string(a));
    if(ab > ba) answer = ab;
    else answer = ba;
    return answer;
}