/*
��ó: ���α׷��ӽ�
����: �ڵ��� ��ȣ ������
���̵�: Level1
�ð�: 5��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12948
*/
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    for (int i=0; i<phone_number.length()-4; i++) {
        phone_number[i] = '*';
    }
    return phone_number;
}