/*
��ó: ���α׷��ӽ�
����: �������� 1�� �Ǵ� �� ã��
���̵�: Level1
�ð�: 7��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/87389
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<n; i++) {
        if(n%i == 1) {
            answer = i;
            break;
        } 
    }
    return answer;
}