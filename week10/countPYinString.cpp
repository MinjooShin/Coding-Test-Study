/*
��ó: ���α׷��ӽ�
����: ���ڿ� �� p�� y�� ����
���̵�: Level1
�ð�: 10��
�ּ�: https://school.programmers.co.kr/learn/courses/30/lessons/12916
*/

#include <string>
#include <cctype>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cntp = 0, cnty = 0;
    for (auto c: s) {
        c = tolower(c);
        (c == 'p')? cntp++ : (c == 'y')? cnty++ : 0;
    }
    return (cntp == cnty)? true : false;
}