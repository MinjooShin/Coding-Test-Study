/*
��ó: ���α׷��ӽ�
����: �ݶ��� ���� �����
���̵�: Level0
�ð�: 5��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181919
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while (n != 1) {
        n = (n%2==0)? (n/2) : (3*n+1);
        answer.push_back(n);
    }
    return answer;
}