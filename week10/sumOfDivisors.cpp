/*
��ó: ���α׷��ӽ�
����: ����� ��
���̵�: Level1
�ð�: 3��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12928
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=n; i>0; i--) {
        answer += (n%i == 0)? i : 0; 
    }
    return answer;
}