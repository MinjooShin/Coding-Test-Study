/*
��ó: ���α׷��ӽ�
����: 9�� ���� ������
���̵�: Level0
�ð�: 20��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181914
*/
#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (auto digit : number) {
        answer += int(digit) - '0';
    }
    return answer %= 9;
}