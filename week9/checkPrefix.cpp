/*
��ó: ���α׷��ӽ�
����: ���λ����� Ȯ���ϱ�
���̵�: Level0
�ð�: 3��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/181906
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    return my_string.substr(0, is_prefix.size()) == is_prefix;
}