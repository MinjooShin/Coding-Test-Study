/*
��ó: ���α׷��ӽ�
����: ������ ���� ����
���̵�: Level0
�ð�: 2��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181917
*/
#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    return ((x1 || x2) && (x3 || x4))? true : false;
}